/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x1C004A3CC
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x1C004A2A8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3CC (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3CC (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C004A534 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C004ABA8 (AMLIGetValidNamespaceName.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     OSCloseHandle @ 0x1C008DB38 (OSCloseHandle.c)
 *     OSOpenNextSubkey @ 0x1C008E198 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C008E47C (OSReadNextRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v4; // edi
  int RegValue; // ebx
  ULONG v6; // esi
  int Subkey; // edi
  int v8; // edx
  __int64 v9; // rdx
  unsigned int v11; // [rsp+28h] [rbp-38h]
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-18h] BYREF

  v13 = 0LL;
  KeyHandle = 0LL;
  v4 = 0;
  do
  {
    RegValue = OSReadNextRegValue(a1, v4, v14);
    if ( RegValue >= 0 )
      RegValue = AMLIAddNextNamespaceOverrideObject(a1, a2, v14);
    ++v4;
  }
  while ( !RegValue );
  if ( RegValue < 0 )
  {
    if ( RegValue == -2147483622 )
    {
      v6 = 0;
      do
      {
        Subkey = OSOpenNextSubkey(a1, v6, v14, (__int64)&KeyHandle);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v14, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject(gpheapGlobal, v14, a2, *(_QWORD *)(a2 + 48), &v13, v8 & v11);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(KeyHandle, v13);
            DereferenceObjectEx(v13, v9);
          }
          OSCloseHandle(KeyHandle);
          KeyHandle = 0LL;
        }
        ++v6;
      }
      while ( !Subkey );
      if ( Subkey == -2147483622 )
      {
        RegValue = 0;
      }
      else
      {
        if ( Subkey >= 0 )
          Subkey = -1073741823;
        RegValue = Subkey;
      }
    }
  }
  else
  {
    RegValue = -1073741823;
  }
LABEL_20:
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)RegValue;
}
