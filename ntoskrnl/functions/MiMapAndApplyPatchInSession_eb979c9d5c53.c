__int64 __fastcall MiMapAndApplyPatchInSession(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  _QWORD *v7; // rdi
  int v8; // ebx
  int IsImageIATProtected; // eax
  int v10; // ebp
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  __int64 v13; // r9
  unsigned int *v15; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(__int64 **)(a2 + 88);
  v16 = 0LL;
  v15 = 0LL;
  v7 = MiAddEntryToImportList(v3, a1);
  if ( v7 )
  {
    IsImageIATProtected = KeIsImageIATProtected(**(_QWORD **)a3);
    v8 = MmLoadSystemImageEx(a1 + 72, 0LL, 0LL, 0LL, IsImageIATProtected != 0 ? 1879048193 : 1610612737, &v15, &v16);
    if ( v8 < 0 )
      goto LABEL_11;
    v10 = 1;
    HotPatchInformation = RtlFindHotPatchInformation(*(_QWORD *)(a1 + 48));
    *(_QWORD *)(a3 + 24) = HotPatchInformation;
    HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
    *(_QWORD *)(a3 + 32) = v13 + *(unsigned int *)(HotPatchBase + 24);
    v8 = MiApplyHotPatchToDriverDataPages(a3);
    if ( v8 >= 0 )
    {
      if ( !*(_QWORD *)(a3 + 48) || (v8 = MiInvokePatchCallback(a1, a3 + 48), v8 >= 0) )
      {
        v10 = 0;
        *(_QWORD *)(a2 + 88) = v7;
        v8 = 0;
        v7 = v3;
      }
    }
    MiDriverLoadSucceeded(a1, *(_QWORD *)(a1 + 112), 0LL, 0LL, 0LL, 0);
    if ( v10 )
      MmUnloadSystemImage((ULONG_PTR)v15);
    if ( v7 )
LABEL_11:
      MiFreeLoadedImportList(v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
