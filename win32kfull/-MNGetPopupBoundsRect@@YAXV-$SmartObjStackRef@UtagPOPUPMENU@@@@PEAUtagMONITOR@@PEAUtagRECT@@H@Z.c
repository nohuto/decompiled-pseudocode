_QWORD *__fastcall MNGetPopupBoundsRect(int ***a1, __int64 a2, struct tagRECT *a3, int a4)
{
  __int128 v8; // xmm0
  int **v9; // rax
  struct tagRECT v10; // xmm0
  struct tagRECT *v11; // rax
  struct tagRECT v12; // xmm0
  int **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-39h] BYREF
  __int64 v21; // [rsp+28h] [rbp-31h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-21h] BYREF
  __int128 v23; // [rsp+50h] [rbp-9h] BYREF
  struct tagRECT v24; // [rsp+60h] [rbp+7h] BYREF
  __int128 v25; // [rsp+70h] [rbp+17h] BYREF

  v8 = *(_OWORD *)GetMonitorRectForWindow(&v21, a2, *((const struct tagWND **)**a1 + 2));
  v9 = *a1;
  v23 = v8;
  if ( **v9 >= 0 )
  {
    v11 = (struct tagRECT *)&v25;
    v25 = v23;
  }
  else
  {
    v10 = *(struct tagRECT *)GetMonitorMenuRectForWindow(&v24);
    v11 = &v24;
    v24 = v10;
  }
  v12 = *v11;
  v13 = *a1;
  v22 = v12;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v13 + 2) + 40LL) + 288LL) & 0xF) == 2
    || (v14 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 2) + 40LL) + 256LL)), (v20 = v14) == 0)
    || v14 == a2 )
  {
    if ( a4 )
      goto LABEL_14;
LABEL_15:
    *a3 = v22;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15);
  if ( ***a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 112)) )
    v18 = *(_QWORD *)(a2 + 40) + 28LL;
  else
    v18 = v17;
  PhysicalToLogicalDPIRect(&v22, v18, CurrentThreadDpiAwarenessContext, &v20);
  if ( !a4 )
    goto LABEL_15;
  PhysicalToLogicalDPIRect(&v23, *(_QWORD *)(a2 + 40) + 28LL, CurrentThreadDpiAwarenessContext, &v20);
LABEL_14:
  SubtractRect(a3, &v23, &v22);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
}
