/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x140912130
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1407321B8 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlpQuerySecurityDescriptor @ 0x140768784 (RtlpQuerySecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD2(PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor, PULONG BufferSize)
{
  unsigned __int64 v2; // rbx
  __int16 v6; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r13
  ULONG v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // [rsp+50h] [rbp-30h] BYREF
  ULONG v17; // [rsp+54h] [rbp-2Ch]
  unsigned __int64 v18; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v24; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v24 = 0;
  v16 = 0;
  v22 = 0;
  v23 = 0;
  if ( !SelfRelativeSecurityDescriptor )
    return -1073741585;
  if ( !BufferSize )
    return -1073741584;
  v17 = *BufferSize;
  if ( v17 < 0x14 )
    return -1073741811;
  v6 = *((_WORD *)SelfRelativeSecurityDescriptor + 1);
  if ( v6 >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor((__int64)SelfRelativeSecurityDescriptor, &v18, &v22, &v19, &v23, &v20, &v24, &v21, &v16);
  v7 = v18;
  v8 = v19;
  if ( v18 <= v19 )
    v9 = v19 + v23;
  else
    v9 = v18 + v22;
  v10 = v20;
  if ( v9 <= v20 )
    v9 = v20 + v24;
  v11 = v21;
  if ( v9 <= v21 )
    v9 = v21 + v16;
  v12 = 40;
  if ( v9 )
    v12 = ((v9 - (_DWORD)SelfRelativeSecurityDescriptor - 13) & 0xFFFFFFF8) + 40;
  if ( v12 <= v17 )
  {
    if ( v9 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 40, (char *)SelfRelativeSecurityDescriptor + 20, v12 - 40LL);
      v7 = v18;
      v6 = *((_WORD *)SelfRelativeSecurityDescriptor + 1);
    }
    v13 = v7 + 20;
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) = v6 & 0x7FFF;
    if ( !v7 )
      v13 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 1) = v13;
    v14 = v8 + 20;
    if ( !v8 )
      v14 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 2) = v14;
    v15 = v11 + 20;
    if ( !v11 )
      v15 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 3) = v15;
    if ( v10 )
      v2 = v10 + 20;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 4) = v2;
    return 0;
  }
  else
  {
    *BufferSize = v12;
    return -1073741789;
  }
}
