/*
 * XREFs of RtlInitializeSidEx @ 0x1402FCFD0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 */

NTSTATUS __fastcall RtlInitializeSidEx(_DWORD *a1, struct _SID_IDENTIFIER_AUTHORITY *a2, UCHAR a3, __int64 a4)
{
  unsigned int v4; // ebx
  NTSTATUS result; // eax
  UCHAR *v7; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // r8
  UCHAR v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  v10 = a3;
  v11 = a4;
  v4 = a3;
  result = RtlInitializeSid(a1, a2, a3);
  if ( result >= 0 )
  {
    if ( (_BYTE)v4 )
    {
      v7 = &v10;
      v8 = a1 + 2;
      v9 = v4;
      do
      {
        v7 += 8;
        *v8++ = *(_DWORD *)v7;
        --v9;
      }
      while ( v9 );
    }
    return 0;
  }
  return result;
}
