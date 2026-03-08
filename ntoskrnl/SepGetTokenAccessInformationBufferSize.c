/*
 * XREFs of SepGetTokenAccessInformationBufferSize @ 0x1407712D0
 * Callers:
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x140247150 (SepTokenPrivilegeCount.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1407714CC (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepGetTokenAccessInformationBufferSize(
        __int64 a1,
        char a2,
        __int64 a3,
        _DWORD *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        unsigned int *a9,
        int *a10,
        int *a11,
        unsigned int *a12,
        _DWORD *a13)
{
  unsigned int v13; // ebx
  __int64 v15; // r11
  int v16; // ecx
  int v17; // r10d
  unsigned int v18; // ecx
  int v19; // r12d
  int v20; // r13d
  int v21; // r15d
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // ebp
  int v26; // esi
  __int64 v27; // rax
  unsigned int v28; // edi
  int v29; // ecx
  __int64 *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-48h]
  int v38; // [rsp+24h] [rbp-44h]
  int v39; // [rsp+28h] [rbp-40h]
  int v40; // [rsp+70h] [rbp+8h] BYREF
  char v41; // [rsp+78h] [rbp+10h]
  _DWORD *v42; // [rsp+88h] [rbp+20h]

  v42 = a4;
  v41 = a2;
  v13 = 0;
  v40 = 0;
  v37 = SepTokenPrivilegeCount(a1);
  v16 = 12 * v37 + 4;
  if ( !v37 )
    v16 = 16;
  v17 = *(_DWORD *)(v15 + 800);
  v39 = v16;
  v18 = *(_DWORD *)(v15 + 124);
  v19 = 16 * *(_DWORD *)(v15 + 128);
  v20 = 16 * v17;
  v21 = 16 * v18;
  v38 = 16 * v18;
  if ( v18 )
  {
    v22 = *(__int64 **)(v15 + 152);
    v23 = v18;
    do
    {
      v24 = *v22;
      v22 += 2;
      v21 += (4 * *(unsigned __int8 *)(v24 + 1) + 15) & 0xFFFFFFF8;
      --v23;
    }
    while ( v23 );
  }
  v25 = 16 * *(_DWORD *)(v15 + 128);
  if ( *(_DWORD *)(v15 + 128) )
  {
    v34 = *(__int64 **)(v15 + 160);
    v35 = *(unsigned int *)(v15 + 128);
    do
    {
      v36 = *v34;
      v34 += 2;
      v25 += (4 * *(unsigned __int8 *)(v36 + 1) + 15) & 0xFFFFFFF8;
      --v35;
    }
    while ( v35 );
  }
  v26 = 16 * v17;
  if ( v17 )
  {
    v31 = *(__int64 **)(v15 + 792);
    v32 = *(unsigned int *)(v15 + 800);
    do
    {
      v33 = *v31;
      v31 += 2;
      v26 += (4 * *(unsigned __int8 *)(v33 + 1) + 15) & 0xFFFFFFF8;
      --v32;
    }
    while ( v32 );
  }
  v27 = *(_QWORD *)(v15 + 784);
  v28 = 0;
  if ( v27 )
    v28 = (4 * *(unsigned __int8 *)(v27 + 1) + 15) & 0xFFFFFFF8;
  if ( !v41 )
    a3 = *(_QWORD *)(v15 + 1104);
  if ( a3 )
    v13 = (4 * *(unsigned __int8 *)(a3 + 1) + 15) & 0xFFFFFFF8;
  AuthzBasepQueryInternalSecurityAttributesToken(*(_QWORD *)(v15 + 776), 0LL, 0LL, &v40);
  *v42 = v37;
  *a5 = v21;
  *a6 = v38;
  v29 = v40;
  *a7 = v25;
  *a8 = v19;
  *a9 = v28;
  *a10 = v26;
  *a11 = v20;
  *a12 = v13;
  *a13 = v29;
  return v21 + 904 + v25 + v28 + v26 + v13 + v29 + v39;
}
