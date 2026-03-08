/*
 * XREFs of ?Initialize@CTTMDEVICE@@QEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBG@Z @ 0x1C0202474
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1C0201D68 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C001F920 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall CTTMDEVICE::Initialize(
        CTTMDEVICE *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER *a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *Src)
{
  wchar_t *v6; // rbx
  __int64 v8; // r14
  const wchar_t *v10; // r8
  int v11; // eax
  __int64 v12; // rsi
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  *((_QWORD *)this + 8) = a3;
  v6 = (wchar_t *)((char *)this + 88);
  *((_QWORD *)this + 9) = a2;
  v8 = a4;
  *((_DWORD *)this + 20) = a4;
  v14 = 0LL;
  *((_DWORD *)this + 21) = a5;
  memset((char *)this + 88, 0, 0x208uLL);
  v10 = Src;
  *((_DWORD *)this + 152) = 34078720;
  *((_QWORD *)this + 77) = v6;
  wcscpy_s(v6, 0x104uLL, v10);
  v11 = RtlStringCbLengthW(*((const unsigned __int16 **)this + 77), *((unsigned __int16 *)this + 305), &v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry4(2LL, a3, v8, v11, 1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get monitor CCD name length on adapter 0x%I64x target 0x%I64x (Status = 0x%I64x).",
      (__int64)a3,
      v8,
      v12,
      1LL,
      0LL);
  }
  else
  {
    *((_WORD *)this + 304) = v14;
  }
  return (unsigned int)v12;
}
