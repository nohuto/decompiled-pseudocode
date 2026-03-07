_QWORD *__fastcall xxxRedrawForSetLPITEMInfo(__int64 ***a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  _QWORD *result; // rax
  int ClassStyle; // eax
  __int64 *v12; // rcx
  int v13; // edi
  __int64 v14; // rbx
  void *v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v17 = gSmartObjNullRef;
  v18 = *(_QWORD *)(v4 + 1512);
  *(_QWORD *)(v4 + 1512) = &v18;
  v6 = (__int64 *)a1[2];
  if ( !v6 )
    v6 = **a1;
  v7 = MNGetPopupFromMenu(v6, 0LL);
  if ( v7 != *(_QWORD *)v17 )
  {
    if ( v17 != gSmartObjNullRef && !--*(_DWORD *)(v17 + 8) )
    {
      if ( *(_BYTE *)(v17 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v17);
    }
    if ( v7 )
    {
      v17 = *(_QWORD *)(v7 + 88);
      ++*(_DWORD *)(v17 + 8);
    }
    else
    {
      v17 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v17 )
  {
    xxxMNUpdateShownMenu(&v17, a2, 1LL);
    v16 = (__int64 *)a1[2];
    if ( !v16 )
      v16 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v16, a2) == -1 )
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v17);
  }
  if ( (*(_DWORD *)((**a1)[5] + 40) & 0x100) != 0
    && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
    && (**a1)[10]
    && (unsigned int)IsWindowDesktopComposed((**a1)[10]) )
  {
    DirtyVisRgnTrackers((**a1)[10]);
    ClassStyle = DwmGetClassStyle((**a1)[10]);
    v12 = (__int64 *)*a1;
    v13 = ClassStyle;
    if ( (**a1)[10] )
    {
      v12 = **a1;
      v14 = *(_QWORD *)v12[10];
    }
    else
    {
      v14 = 0LL;
    }
    v15 = (void *)ReferenceDwmApiPort(v12);
    DwmAsyncChildStyleChange(v15, v14, -26, v13);
  }
  v8 = 0LL;
  v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v9 )
    v8 = *v9;
  if ( v17 != gSmartObjNullRef && !--*(_DWORD *)(v17 + 8) )
  {
    if ( *(_BYTE *)(v17 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v17);
  }
  result = *(_QWORD **)(v8 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v8 + 1512) = result;
  }
  return result;
}
