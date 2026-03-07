__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r13
  BOOL v7; // esi
  int v8; // r14d
  HDC v9; // r12
  unsigned int v10; // edi
  DC *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DC *v15; // rcx
  bool v16; // zf
  __int64 v17; // rbx
  DC *v18; // rax
  int v19; // r13d
  BOOL v20; // r14d
  HDC v21; // rax
  DC *v22; // rdx
  void (__fastcall *v23)(_QWORD, _QWORD); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, _QWORD, _QWORD); // rax
  int v28; // [rsp+28h] [rbp-51h]
  int v29; // [rsp+58h] [rbp-21h] BYREF
  __int64 v30; // [rsp+60h] [rbp-19h] BYREF
  int v31; // [rsp+68h] [rbp-11h] BYREF
  DC *v32[2]; // [rsp+70h] [rbp-9h] BYREF
  DC *v33[9]; // [rsp+80h] [rbp+7h] BYREF

  v5 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v33, a1);
  v11 = v33[0];
  if ( !v33[0] )
  {
LABEL_6:
    EngSetLastError(6u);
LABEL_7:
    v15 = v33[0];
    goto LABEL_8;
  }
  if ( *((_WORD *)v33[0] + 6) > 1u )
  {
    if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
    {
      v29 = 0;
      LODWORD(v30) = v14;
      v32[0] = (DC *)0x1000000;
      v31 = 67261;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_1C03200B1,
        v13,
        v14,
        (__int64)&v31,
        (__int64)v32,
        (__int64)&v30,
        (__int64)&v29);
    }
    goto LABEL_6;
  }
  v16 = (*((_DWORD *)v33[0] + 9) & 0x800) == 0;
  v8 = *((_DWORD *)v33[0] + 9) & 0x800;
  v29 = v8;
  if ( !v16 )
  {
    DC::bMakeInfoDC(v33[0], 0);
    v11 = v33[0];
  }
  v17 = *((_QWORD *)v11 + 6);
  v18 = *(DC **)(v17 + 1680);
  *(_QWORD *)(v17 + 1680) = 0LL;
  v15 = v33[0];
  v32[0] = v18;
  if ( (*((_DWORD *)v33[0] + 9) & 0x100) == 0 && *((_DWORD *)v33[0] + 8) != 1 && (*(_DWORD *)(v17 + 40) & 0x80u) != 0 )
  {
    v19 = *((_DWORD *)v33[0] + 27);
    v20 = *((_QWORD *)v33[0] + 62) != 0LL;
    v7 = v20;
    if ( !XDCOBJ::bCleanDC((XDCOBJ *)v33, 0) )
      goto LABEL_30;
    if ( *(_DWORD *)(v17 + 8) != 1 )
      goto LABEL_30;
    v21 = (HDC)hdcOpenDCW(&word_1C03142AC, a2, 0LL, 0LL, *(_QWORD *)(v17 + 2536), v32[0], a4, a5, 0);
    v9 = v21;
    if ( !v21 )
      goto LABEL_30;
    *(_QWORD *)(v17 + 2536) = 0LL;
    DCOBJ::DCOBJ((DCOBJ *)v32, v21);
    v22 = v32[0];
    if ( v32[0] )
    {
      if ( v19 > 0 )
      {
        *((_DWORD *)v32[0] + 27) = *((_DWORD *)v32[0] + 26);
        v22 = v32[0];
      }
      *((_QWORD *)v22 + 259) = *((_QWORD *)v33[0] + 259);
      *((_QWORD *)v33[0] + 259) = 0LL;
      *((_QWORD *)v32[0] + 260) = *((_QWORD *)v33[0] + 260);
      *((_QWORD *)v33[0] + 260) = 0LL;
      v23 = *(void (__fastcall **)(_QWORD, _QWORD))(v17 + 2720);
      if ( v23 )
        v23(*(_QWORD *)(v17 + 1768), *(_QWORD *)(*((_QWORD *)v32[0] + 6) + 1768LL));
      GreAcquireHmgrSemaphore();
      v5 = a1;
      LOBYTE(v28) = 1;
      HmgSwapLockedHandleContents(a1, 0LL, v9, 0LL, v28);
      GreReleaseHmgrSemaphore(v25, v24);
      v10 = 1;
    }
    else
    {
      EngSetLastError(6u);
      v5 = a1;
    }
    v7 = v20;
    if ( v32[0] )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)v32);
      v8 = v29;
    }
    else
    {
LABEL_30:
      v8 = v29;
      v5 = a1;
    }
    goto LABEL_7;
  }
LABEL_8:
  if ( v15 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  if ( v10 )
  {
    GrepDeleteDC(v9, 0x400000LL);
    DCOBJ::DCOBJ((DCOBJ *)v32, v5);
    if ( !v32[0] )
    {
      EngSetLastError(6u);
      v10 = 0;
      goto LABEL_47;
    }
    v30 = *((_QWORD *)v32[0] + 6);
    if ( !v7 )
    {
      *a3 = 0;
      goto LABEL_45;
    }
    if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v30, 0LL) )
      goto LABEL_41;
    DC::pSurface(v32[0], *(struct SURFACE **)(v30 + 2528));
    *a3 = *(_DWORD *)(*(_QWORD *)(v30 + 2528) + 112LL) & 0x2000000;
    if ( (unsigned int)Feature_3058082109__private_IsEnabledDeviceUsage() )
    {
      if ( !*a3 )
      {
LABEL_38:
        DC::bSetDefaultRegion(v32[0]);
LABEL_39:
        v26 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v30 + 2944);
        if ( v26 )
        {
          v26((*(_QWORD *)(v30 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v30 + 2528) != 0LL), 0LL, 0LL);
          goto LABEL_42;
        }
LABEL_41:
        v10 = 0;
LABEL_42:
        if ( !v10 )
        {
LABEL_47:
          if ( v32[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v32);
          return v10;
        }
LABEL_45:
        if ( v8 )
          DC::bMakeInfoDC(v32[0], 1);
        goto LABEL_47;
      }
    }
    else if ( !*a3 )
    {
      goto LABEL_39;
    }
    *((_QWORD *)v32[0] + 64) = *(_QWORD *)(*(_QWORD *)(v30 + 2528) + 56LL);
    goto LABEL_38;
  }
  return v10;
}
