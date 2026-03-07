__int64 __fastcall RtlSelfRelativeToAbsoluteSD2(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-2Ch]
  unsigned __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v23 = 0;
  v15 = 0;
  v21 = 0;
  v22 = 0;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v16 = *a2;
  if ( v16 < 0x14 )
    return 3221225485LL;
  if ( *(__int16 *)(a1 + 2) >= 0 )
    return 3221225703LL;
  RtlpQuerySecurityDescriptor(a1, &v17, &v21, &v18, &v22, &v19, &v23, &v20, &v15);
  v6 = v17;
  v7 = v18;
  if ( v17 <= v18 )
    v8 = v18 + v22;
  else
    v8 = v17 + v21;
  v9 = v19;
  if ( v8 <= v19 )
    v8 = v19 + v23;
  v10 = v20;
  if ( v8 <= v20 )
    v8 = v20 + v15;
  v11 = 40;
  if ( v8 )
    v11 = ((v8 - a1 - 13) & 0xFFFFFFF8) + 40;
  if ( v11 <= v16 )
  {
    if ( v8 )
      memmove((void *)(a1 + 40), (const void *)(a1 + 20), v11 - 40LL);
    *(_WORD *)(a1 + 2) &= ~0x8000u;
    v12 = v6 + 20;
    if ( !v6 )
      v12 = 0LL;
    *(_QWORD *)(a1 + 8) = v12;
    v13 = v7 + 20;
    if ( !v7 )
      v13 = 0LL;
    *(_QWORD *)(a1 + 16) = v13;
    v14 = v10 + 20;
    if ( !v10 )
      v14 = 0LL;
    *(_QWORD *)(a1 + 24) = v14;
    if ( v9 )
      v2 = v9 + 20;
    *(_QWORD *)(a1 + 32) = v2;
    return 0LL;
  }
  else
  {
    *a2 = v11;
    return 3221225507LL;
  }
}
