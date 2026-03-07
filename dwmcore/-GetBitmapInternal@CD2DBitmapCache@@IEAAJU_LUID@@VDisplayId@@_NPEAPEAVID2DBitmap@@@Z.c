__int64 __fastcall CD2DBitmapCache::GetBitmapInternal(
        __int64 a1,
        CSecondaryD2DBitmap *a2,
        int a3,
        CHAR a4,
        volatile signed __int32 **a5)
{
  volatile signed __int32 *v5; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // rcx
  volatile signed __int32 *v19; // rsi
  CSecondaryD2DBitmap *v20; // r12
  __int64 v21; // rcx
  int v22; // r15d
  const struct FastRegion::Internal::CRgnData *v23; // rdx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // edi
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r12d
  BOOL v36; // eax
  CHAR v37; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned int v40; // ecx
  unsigned int v41; // [rsp+20h] [rbp-E0h]
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  CSecondaryD2DBitmap *v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  char v45[8]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v46[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v47[2]; // [rsp+90h] [rbp-70h] BYREF
  void *lpMem; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h] BYREF
  int v50; // [rsp+B0h] [rbp-50h]
  _DWORD v51[2]; // [rsp+B4h] [rbp-4Ch] BYREF
  _DWORD v52[13]; // [rsp+BCh] [rbp-44h] BYREF
  _QWORD v53[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v54[8]; // [rsp+100h] [rbp+0h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v5 = 0LL;
  Response[0] = a4;
  v9 = 0;
  v43 = a2;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v9 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292412, 0xBAu, 0LL);
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10
    && (v11 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 8LL),
        v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 32LL))(v11, v46),
        *v12 == (_DWORD)a2) )
  {
    v13 = HIDWORD(v43);
    if ( v12[1] == HIDWORD(v43) )
    {
      v14 = *(_QWORD *)(a1 + 32) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL);
      v15 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 8LL))(v14, v45);
      if ( v15 == DisplayId::None || v15 == a3 || a3 == DisplayId::All )
      {
        v16 = *(_QWORD *)(a1 + 32) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 8LL);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) || Response[0] )
        {
          v5 = *(volatile signed __int32 **)(a1 + 32);
          if ( v5 )
          {
            v17 = (char *)v5 + *(int *)(*((_QWORD *)v5 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
          }
          goto LABEL_9;
        }
      }
    }
  }
  else
  {
    v13 = HIDWORD(v43);
  }
  v19 = 0LL;
  v20 = *(CSecondaryD2DBitmap **)(a1 + 48);
  v43 = *(CSecondaryD2DBitmap **)(a1 + 56);
  if ( v20 == v43 )
  {
LABEL_30:
    v22 = 2;
  }
  else
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)v20 + 8LL)
          + 16LL
          + *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) + 16LL) + 8LL);
      if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21) + 896) == __PAIR64__(
                                                                                                    v13,
                                                                                                    (unsigned int)a2) )
        break;
      v20 = (CSecondaryD2DBitmap *)((char *)v20 + 8);
      if ( v20 == v43 )
        goto LABEL_30;
    }
    v22 = 2;
    v19 = *(volatile signed __int32 **)(*(_QWORD *)v20 + 8LL);
    v43 = (CSecondaryD2DBitmap *)v19;
    if ( v19 )
    {
      if ( *((int *)v19 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v34 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v35 = v34;
          if ( !v34 )
          {
            v36 = IsDebuggerPresent();
            v37 = Response[0];
            if ( v36 )
              v37 = 103;
            Response[0] = v37;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
            word_1803392B0,
            word_1803392B0,
            "Function: ",
            L"CMILRefCountImpl::AddReference",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            23);
          if ( v35 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
          }
          else
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              Response,
              Response);
            __debugbreak();
          }
          switch ( Response[0] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_15;
            case 'G':
            case 'g':
              goto LABEL_15;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_65;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_65;
            default:
LABEL_65:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_15:
      _InterlockedIncrement(v19 + 2);
      v19 = (volatile signed __int32 *)v43;
      if ( v43 )
      {
LABEL_16:
        (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 24))(*(_QWORD *)(a1 + 24), &v44);
        v9 = 0;
        v53[0] = 0LL;
        v53[1] = v44;
        v46[0] = 0LL;
        v46[1] = 0LL;
        lpMem = &v49;
        if ( (int)v44 <= 0 || SHIDWORD(v44) <= 0 )
        {
          v22 = 0;
          LODWORD(v49) = 0;
        }
        else
        {
          v50 = v44;
          v52[3] = v44;
          v49 = 2LL;
          v51[0] = 0;
          v51[1] = (unsigned int)v54 - 60 - (unsigned int)v51;
          v52[2] = 0;
          v52[0] = HIDWORD(v44);
          v52[1] = (unsigned int)v54 - 60 - (unsigned int)v52 + 8;
        }
        if ( !v22 )
          goto LABEL_28;
        v23 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)v19 + 33);
        if ( !*(_DWORD *)v23
          || !FastRegion::Internal::CRgnData::Intersects((const struct FastRegion::Internal::CRgnData *)&v49, v23) )
        {
          goto LABEL_28;
        }
        v24 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&lpMem, (const struct CRegion *)(v19 + 66));
        if ( v24 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v24, retaddr);
        CRegion::GetBoundingRect((CRegion *)&lpMem, (struct MilRectU *)v46);
        if ( &v49 != lpMem )
        {
          operator delete(lpMem);
          LODWORD(v49) = 0;
          lpMem = &v49;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 40LL))(*(_QWORD *)(a1 + 24)) )
        {
          v25 = CSecondaryD2DBitmap::Update((CSecondaryD2DBitmap *)v19);
          v27 = v25;
          v9 = v25;
          if ( v25 >= 0 )
            goto LABEL_27;
          v41 = 263;
        }
        else
        {
          v25 = CD2DBitmapCache::EnsureSysmemBitmap((CD2DBitmapCache *)a1);
          v27 = v25;
          v9 = v25;
          if ( v25 < 0 )
          {
            v41 = 267;
          }
          else
          {
            if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid(*(_QWORD *)(a1 + 40) + 32LL, v53, 0LL) )
            {
              v30 = *(_QWORD *)(a1 + 40) + 32LL;
              v47[0] = 0LL;
              v47[1] = 0LL;
              if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid(v30, 0LL, v47) )
              {
                v31 = CSecondarySysmemBitmap::Update(*(_QWORD *)(a1 + 40), v47, *(_QWORD *)(a1 + 24));
                v9 = v31;
                if ( v31 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x13Cu, 0LL);
                  v27 = v9;
                  MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v9, 0x10Fu, 0LL);
                  goto LABEL_76;
                }
              }
            }
            v25 = CSecondaryD2DBitmap::Update((CSecondaryD2DBitmap *)v19);
            v27 = v25;
            v9 = v25;
            if ( v25 >= 0 )
            {
              if ( *(_BYTE *)(a1 + 72) )
              {
                v33 = *(_QWORD *)(a1 + 40);
                *(_QWORD *)(a1 + 40) = 0LL;
                if ( v33 )
                  CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease();
                goto LABEL_28;
              }
LABEL_27:
              v9 = v27;
              if ( v27 >= 0 )
              {
LABEL_28:
                if ( v19 )
                  v5 = v19 + 20;
                goto LABEL_9;
              }
              goto LABEL_76;
            }
            v41 = 275;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, v41, 0LL);
LABEL_76:
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v27, 0xACu, 0LL);
        if ( v19 )
          CMILRefCountBaseT<IUnknown>::InternalRelease(v19);
        goto LABEL_9;
      }
    }
  }
  v43 = 0LL;
  if ( v19 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v19);
  v28 = CD2DBitmapCache::CreateAndCacheBitmap((CD2DBitmapCache *)a1, (struct _LUID)a2, &v43);
  v9 = v28;
  if ( v28 >= 0 )
  {
    v19 = (volatile signed __int32 *)v43;
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xA5u, 0LL);
  if ( v43 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v43);
LABEL_9:
  *a5 = v5;
  return v9;
}
