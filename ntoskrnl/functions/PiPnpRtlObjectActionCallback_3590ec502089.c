__int64 __fastcall PiPnpRtlObjectActionCallback(__int64 a1, const WCHAR *a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v10; // edi
  int AggregatedBooleanPropertyData; // eax
  int v12; // r8d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  unsigned int v17; // eax
  void *Pool2; // r12
  _QWORD *v19; // r13
  int ObjectProperty; // edi
  int v21; // edx
  __int64 v22; // r9
  int ObjectList; // eax
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-80h]
  size_t Size; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-40h] BYREF
  int v28; // [rsp+C8h] [rbp+20h] BYREF

  v6 = a6;
  v10 = -1073741822;
  if ( a4 == 8 )
  {
    if ( a5 == 1 )
    {
      AggregatedBooleanPropertyData = PiDmObjectGetAggregatedBooleanPropertyData(
                                        a3,
                                        (_DWORD)a2,
                                        a3,
                                        *(_QWORD *)(a6 + 24),
                                        *(_QWORD *)(a6 + 32),
                                        *(_QWORD *)(a6 + 40),
                                        *(_QWORD *)(a6 + 48),
                                        *(_DWORD *)(a6 + 56),
                                        *(_QWORD *)(a6 + 64));
      if ( AggregatedBooleanPropertyData != -1073741802
        || (*(_DWORD *)(v6 + 72) & 0x10000) == 0
        && ((AggregatedBooleanPropertyData = PiDmObjectGetCachedObjectProperty(
                                               a3,
                                               (_DWORD)a2,
                                               v12,
                                               *(_QWORD *)(v6 + 24),
                                               *(_QWORD *)(v6 + 32),
                                               *(_QWORD *)(v6 + 40),
                                               *(_QWORD *)(v6 + 48),
                                               *(_DWORD *)(v6 + 56),
                                               *(_QWORD *)(v6 + 64)),
             AggregatedBooleanPropertyData >= 0)
         || AggregatedBooleanPropertyData == -1073741275
         || AggregatedBooleanPropertyData == -1073741772
         || AggregatedBooleanPropertyData == -1073741789) )
      {
        v10 = -1073741536;
        *(_DWORD *)v6 = AggregatedBooleanPropertyData;
      }
      else
      {
        v10 = 0;
        if ( !*(_QWORD *)(v6 + 16) )
          PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
      }
      return v10;
    }
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v10;
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedObjectProperty(a3, (int)a2, a3, *(_QWORD *)(a6 + 24), *(_QWORD *)(a6 + 32), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedObjectProperty(
        a3,
        (int)a2,
        a3,
        *(_QWORD *)(a6 + 24),
        *(_QWORD *)(a6 + 32),
        **(_DWORD **)(a6 + 40),
        *(void **)(a6 + 48),
        **(_DWORD **)(a6 + 64));
    }
    return 0;
  }
  v14 = a4 - 3;
  if ( !v14 )
  {
    if ( a3 != 7 )
      return v10;
    if ( a5 != 1 )
    {
      if ( *(_QWORD *)(a6 + 8) == 1LL )
      {
        if ( *(int *)a6 >= 0 )
          *(_BYTE *)(a6 + 32) = 1;
        else
          PiDrvDbUnmountNode(a2);
        *(_QWORD *)(v6 + 8) = 0LL;
      }
      return v10;
    }
    ObjectList = PiDrvDbMountNode(a2);
    v10 = ObjectList;
    if ( ObjectList >= 0 )
    {
      *(_QWORD *)(v6 + 8) = 1LL;
      return v10;
    }
LABEL_50:
    *(_DWORD *)v6 = ObjectList;
    return (unsigned int)-1073741536;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( a3 == 7 )
    {
      if ( a5 == 1 )
      {
        v24 = PiDrvDbUnmountNode(a2);
        v10 = v24;
        if ( v24 < 0 )
        {
          *(_DWORD *)v6 = v24;
          return (unsigned int)-1073741536;
        }
      }
      else if ( *(_DWORD *)a6 == -1073741772 )
      {
        v10 = -1073741536;
        *(_DWORD *)a6 = 0;
      }
    }
    return v10;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v10;
    v21 = *(_DWORD *)(a6 + 40);
    v22 = *(_QWORD *)(a6 + 32);
    if ( a3 >= 7 )
      return 0;
    v25 = *(_QWORD *)(a6 + 48);
    v27[0] = *(_QWORD *)(a6 + 16);
    v27[1] = *(_QWORD *)(a6 + 24);
    ObjectList = PiDmGetObjectList(a3, (unsigned int)PiDmPnpObjectMatchCallback, (unsigned int)v27, v22, v21, v25);
    if ( ObjectList == -1073741802 )
      return 0;
    goto LABEL_50;
  }
  if ( v16 != 4 )
    return v10;
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
      return v10;
    PiDmObjectUpdateCachedObjectProperty(
      a3,
      (int)a2,
      a3,
      *(_QWORD *)(a6 + 24),
      *(_QWORD *)(a6 + 32),
      *(_DWORD *)(a6 + 40),
      *(void **)(a6 + 48),
      *(_DWORD *)(a6 + 56));
    return 0;
  }
  v10 = 0;
  if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
  {
    v19 = (_QWORD *)(a6 + 16);
LABEL_44:
    if ( !*v19 )
      PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
    return v10;
  }
  v17 = *(_DWORD *)(a6 + 56);
  Pool2 = 0LL;
  v28 = 0;
  LODWORD(Size) = 0;
  if ( v17 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v17, 1198550608LL);
    if ( !Pool2 )
      return v10;
  }
  v19 = (_QWORD *)(v6 + 16);
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     (_DWORD)a2,
                     a3,
                     *(_QWORD *)(v6 + 16),
                     *(_QWORD *)(v6 + 24),
                     *(_QWORD *)(v6 + 32),
                     (__int64)&v28,
                     (__int64)Pool2,
                     *(_DWORD *)(v6 + 56),
                     (__int64)&Size,
                     0);
  if ( ObjectProperty < 0 )
    goto LABEL_68;
  if ( v28 != *(_DWORD *)(v6 + 40) || (_DWORD)Size != *(_DWORD *)(v6 + 56) )
    goto LABEL_29;
  if ( memcmp(Pool2, *(const void **)(v6 + 48), (unsigned int)Size) )
  {
LABEL_68:
    if ( ObjectProperty != -1073741275 || *(_DWORD *)(v6 + 40) || *(_DWORD *)(v6 + 56) )
    {
LABEL_29:
      v10 = 0;
      goto LABEL_36;
    }
  }
  *(_DWORD *)v6 = ObjectProperty;
  v10 = -1073741536;
LABEL_36:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x47706E50u);
  if ( !v10 )
    goto LABEL_44;
  return v10;
}
