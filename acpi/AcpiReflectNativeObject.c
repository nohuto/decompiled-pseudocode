/*
 * XREFs of AcpiReflectNativeObject @ 0x1C0037D80
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPauseInterpreterForNamespaceUpdates @ 0x1C0037CDC (AcpiPauseInterpreterForNamespaceUpdates.c)
 *     AMLIResumeInterpreter @ 0x1C0048D2C (AMLIResumeInterpreter.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00499F8 (AMLICreateNativeNamespaceObject.c)
 */

__int64 __fastcall AcpiReflectNativeObject(__int64 a1)
{
  __int64 v1; // r13
  char v2; // r15
  char v3; // r12
  int v4; // ebx
  unsigned int i; // ebp
  unsigned int v7; // r14d
  int v8; // eax
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  char v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v15 = 0;
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v7 = 0;
    if ( *(_DWORD *)(a1 + 24) )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(a1 + 40LL * v7 + 48);
        if ( i )
        {
          if ( (v8 & 1) != 0 )
          {
LABEL_9:
            v9 = *(_DWORD *)(a1 + 40LL * v7 + 52);
            v10 = *(_DWORD *)(a1 + 40LL * v7 + 40);
            v11 = *(_DWORD *)(a1 + 40LL * v7 + 56);
            v12 = *(_DWORD *)(a1 + 40LL * v7 + 44) != 0 ? 6 : 8;
            v14 = 0;
            v4 = AMLICreateNativeNamespaceObject(v12, v10, v1, v9, v11, (__int64)&v14);
            if ( v4 < 0 && v14 )
              v4 = 0;
            goto LABEL_12;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 40LL * v7 + 44) > 1u )
          {
            v4 = -1073741637;
LABEL_12:
            *(_DWORD *)(a1 + 40LL * v7 + 64) = v4;
            goto LABEL_13;
          }
          *(_DWORD *)(a1 + 40LL * v7 + 64) = -1073741823;
          if ( (v8 & 1) == 0 )
            goto LABEL_9;
          v3 = 1;
        }
LABEL_13:
        if ( ++v7 >= *(_DWORD *)(a1 + 24) )
        {
          v2 = v15;
          break;
        }
      }
    }
    if ( !v3 )
      break;
    if ( i == 1 )
      break;
    v4 = AcpiPauseInterpreterForNamespaceUpdates();
    if ( v4 < 0 )
      break;
    v2 = 1;
    v15 = 1;
  }
  if ( v2 )
    AMLIResumeInterpreter(a1);
  return (unsigned int)v4;
}
