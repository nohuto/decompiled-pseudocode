__int64 __fastcall PiDmListInitEnumCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // eax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  int ObjectProperty; // eax
  unsigned int v10; // ebx
  wchar_t *v11; // rdx
  int v12; // eax
  unsigned int *v13; // rsi
  void *v15; // rcx
  __int64 Pool2; // rax
  int v17; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+64h] [rbp-35h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  wchar_t v20[40]; // [rsp+70h] [rbp-29h] BYREF

  v18 = 0;
  P = 0LL;
  v3 = 1024;
  v17 = 1024;
  *a3 = 0;
  while ( 1 )
  {
    if ( v3 > *(_DWORD *)(a2 + 8) )
    {
      v15 = *(void **)a2;
      *(_DWORD *)(a2 + 8) = v3;
      if ( v15 )
        ExFreePoolWithTag(v15, 0x5A706E50u);
      Pool2 = ExAllocatePool2(256LL, *(unsigned int *)(a2 + 8), 1517317712LL);
      *(_QWORD *)a2 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    v6 = *(int *)(a2 + 12);
    v7 = *(unsigned int *)(a1 + 28);
    v8 = *(_QWORD *)(a1 + 16);
    v17 = 0;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v8,
                       v7,
                       0LL,
                       0LL,
                       PiDmListDefs[5 * v6 + 4],
                       (__int64)&v18,
                       *(_QWORD *)a2,
                       *(_DWORD *)(a2 + 8),
                       (__int64)&v17,
                       0);
    v10 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    v3 = v17;
  }
  if ( ObjectProperty == -1073741275 )
    return 0;
  if ( ObjectProperty < 0 )
    return v10;
  if ( v18 == 13 )
  {
    PnpStringFromGuid(*(int **)a2, v20);
    v11 = v20;
  }
  else
  {
    if ( v18 != 18 )
      return v10;
    v11 = *(wchar_t **)a2;
  }
  v12 = PiDmAddCacheReferenceForObject(
          PiDmListDefs[5 * *(int *)(a2 + 12)],
          (__int64)v11,
          (volatile signed __int32 **)&P);
  v13 = (unsigned int *)P;
  v10 = v12;
  if ( v12 >= 0 )
    PiDmListAddObject(*(_DWORD *)(a2 + 12), (ULONG_PTR)P, (__int64 *)a1, 0LL);
  if ( v13 )
  {
    PiDmRemoveCacheReferenceForObject(v13[7], *((_QWORD *)v13 + 2));
    PiDmObjectRelease(v13);
  }
  return v10;
}
