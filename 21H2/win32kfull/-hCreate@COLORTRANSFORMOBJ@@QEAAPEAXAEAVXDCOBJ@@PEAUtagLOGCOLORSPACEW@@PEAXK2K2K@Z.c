/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02940B8
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B6398 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00BCF78 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026D3F8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0293E38 (-bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0293E94 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // r15
  __int64 v14; // rbx
  struct OBJECT *Object; // rsi
  int v16; // eax
  __int64 (__fastcall *v17)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // rax
  _QWORD v19[4]; // [rsp+50h] [rbp-99h] BYREF
  int v20; // [rsp+70h] [rbp-79h]
  _QWORD v21[2]; // [rsp+78h] [rbp-71h] BYREF
  _BYTE v22[40]; // [rsp+88h] [rbp-61h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-39h]
  __int64 v24; // [rsp+B8h] [rbp-31h]
  _BYTE v25[32]; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-1h]

  v9 = 0LL;
  v10 = 0LL;
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( !v14 )
    return v9;
  Object = (struct OBJECT *)AllocateObject(32LL, 14LL, 0LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v25);
    v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v25, Object, 0xEu, 2);
    if ( v9 )
    {
      *((_QWORD *)this + 4) = Object;
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v21);
      v20 = 1;
      v24 = 0LL;
      v23 = 0LL;
      v21[0] = 0LL;
      v16 = *(_DWORD *)(v14 + 40);
      *(_OWORD *)&v19[1] = 0LL;
      if ( (v16 & 1) != 0 )
      {
        v19[1] = *(_QWORD *)(v14 + 48);
        v19[3] = v14;
        GreAcquireSemaphore(v19[1]);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v19[1], 11LL);
      }
      v17 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v14 + 3200);
      if ( v17 )
        v10 = v17(*(_QWORD *)(v14 + 1800), a3, a4, a5, a6, a7, a8, a9, 0);
      else
        EngSetLastError(0x57u);
      if ( v10 )
      {
        *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v10;
        XDCOBJ::bAddColorTransform(a2, v9);
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v19[1]);
      if ( v21[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v21);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v22);
    }
    if ( v26 )
      _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v25);
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( !Object )
    goto LABEL_22;
  if ( v9 )
  {
    if ( !v10 )
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
      COLORTRANSFORMOBJ::bDelete(this, a2, 0);
      v9 = 0LL;
      Object = 0LL;
    }
LABEL_22:
    if ( v9 )
      return v9;
  }
  if ( Object )
    FreeObject(Object, 14LL);
  return v9;
}
