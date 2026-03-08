/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x140548138
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1405456B4 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  PHYSICAL_ADDRESS *v19; // r14
  void **v20; // r15
  unsigned __int64 v21; // rdi
  void **v22; // r13
  char *v23; // r15
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  PHYSICAL_ADDRESS *v26; // r14
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // r13
  __int64 v30; // rbx
  PHYSICAL_ADDRESS **v31; // r12
  PHYSICAL_ADDRESS *v32; // r15
  void **v33; // rsi
  PHYSICAL_ADDRESS **v34; // r12
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r15
  PHYSICAL_ADDRESS *v37; // r13
  unsigned __int64 v38; // rdi
  char **v39; // r14
  char *v40; // rbx
  unsigned __int64 v41; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+20h] [rbp-88h]
  unsigned __int64 v43; // [rsp+28h] [rbp-80h]
  __int64 v44; // [rsp+30h] [rbp-78h]
  PHYSICAL_ADDRESS **v45; // [rsp+38h] [rbp-70h]
  PHYSICAL_ADDRESS **v46; // [rsp+40h] [rbp-68h]
  void **v47; // [rsp+48h] [rbp-60h]
  __int64 v48; // [rsp+50h] [rbp-58h]
  unsigned __int64 v49; // [rsp+70h] [rbp-38h]
  unsigned __int64 v51; // [rsp+E0h] [rbp+38h]

  v6 = a3;
  v8 = a3 * (unsigned __int64)a2;
  if ( v8 < 5 )
    return 3221225507LL;
  v10 = v8 - 2;
  v11 = v10 / 0x40201;
  if ( v10 / 0x40201 >= 0x200 )
    v11 = 512LL;
  v12 = v11 << 9;
  v41 = v11 << 9;
  v13 = v11 << 18;
  v51 = v11 << 18;
  v14 = v10 - 262657 * v11;
  if ( v14 >= 3 && v11 < 0x200 )
  {
    v15 = v14 - 1;
    ++v11;
    v12 += v15 / 0x201;
    v13 += (v15 / 0x201) << 9;
    v41 = v12;
    v51 = v13;
    v16 = v15 % 0x201;
    if ( v16 >= 2 )
    {
      ++v12;
      v13 = v16 + v13 - 1;
      v41 = v12;
      v51 = v13;
    }
  }
  v17 = v11 + 2;
  *a4 = v11 + 2;
  v49 = v12 + v11 + 2;
  *a5 = v49;
  v48 = *a1;
  *(_DWORD *)(v48 + 8) = 3;
  *(_QWORD *)v48 = v13;
  v18 = 1 % v6;
  v46 = (PHYSICAL_ADDRESS **)&a1[1 / v6];
  v19 = &(*v46)[512 * (1 % v6)];
  *(_QWORD *)(v48 + 16) = (unsigned __int64)MmGetPhysicalAddress(v19).QuadPart >> 12;
  v20 = (void **)&a1[2 / v6];
  v47 = v20;
  v43 = 2 % v6;
  if ( v11 )
  {
    v21 = 0LL;
    v22 = v20;
    v23 = (char *)*v20 + 4096 * (2 % v6);
    v24 = 2 % v6;
    do
    {
      *v19 = MmGetPhysicalAddress(v23);
      v23 += 4096;
      ++v19;
      if ( (++v21 & 0x1FF) == 0 && !(++v18 % v6) )
      {
        ++v46;
        v18 = 0LL;
        v19 = *v46;
      }
      v25 = (v24 + 1) % v6;
      if ( !v25 )
        v23 = (char *)*++v22;
      v24 = (v24 + 1) & -(__int64)(v25 != 0);
    }
    while ( v21 < v11 );
    v12 = v41;
    v13 = v51;
    v20 = v47;
    v17 = v11 + 2;
  }
  v26 = (PHYSICAL_ADDRESS *)((char *)*v20 + 4096 * (2 % v6));
  v27 = v17 / v6;
  v28 = v17 % v6;
  v29 = 0LL;
  v42 = v28;
  v30 = v28;
  v31 = (PHYSICAL_ADDRESS **)&a1[v27];
  v32 = &(*v31)[512 * v28];
  v45 = v31;
  v44 = v28 << 12;
  if ( v12 )
  {
    v33 = (void **)&a1[v27];
    v34 = (PHYSICAL_ADDRESS **)v47;
    do
    {
      *v26 = MmGetPhysicalAddress(v32);
      v32 += 512;
      ++v26;
      if ( (++v29 & 0x1FF) == 0 && !(++v43 % v6) )
      {
        ++v34;
        v43 = 0LL;
        v26 = *v34;
      }
      v35 = (v30 + 1) % v6;
      if ( !v35 )
        v32 = (PHYSICAL_ADDRESS *)*++v33;
      v30 = (v30 + 1) & -(__int64)(v35 != 0);
    }
    while ( v29 < v12 );
    v13 = v51;
    v31 = v45;
  }
  v36 = 0LL;
  v37 = (PHYSICAL_ADDRESS *)((char *)*v31 + v44);
  v38 = v49 % v6;
  v39 = (char **)&a1[v49 / v6];
  v40 = &(*v39)[4096 * (v49 % v6)];
  while ( v36 < v13 )
  {
    while ( 1 )
    {
      *v37 = MmGetPhysicalAddress(v40);
      v40 += 4096;
      ++v37;
      if ( (++v36 & 0x1FF) == 0 && !(++v42 % v6) )
      {
        ++v31;
        v42 = 0LL;
        v37 = *v31;
      }
      if ( ++v38 % v6 )
        break;
      if ( v36 >= v13 )
        goto LABEL_35;
      ++v39;
      v38 = 0LL;
      v40 = *v39;
    }
  }
LABEL_35:
  *a6 = v48;
  return 0LL;
}
