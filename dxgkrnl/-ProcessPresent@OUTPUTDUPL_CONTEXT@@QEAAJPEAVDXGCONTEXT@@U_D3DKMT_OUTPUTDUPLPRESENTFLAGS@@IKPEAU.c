/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C032E8DC
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0329AC4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C03285FC (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C032EA6C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPresent(
        OUTPUTDUPL_CONTEXT *this,
        struct DXGCONTEXT *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        struct AUTOEXPANDALLOCATION *a8,
        struct DXGCONTEXT **a9)
{
  int v9; // r15d
  int v10; // ebx
  DXGDXGIKEYEDMUTEX *v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // r8
  _QWORD v19[3]; // [rsp+58h] [rbp-31h] BYREF
  int v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+74h] [rbp-15h]
  unsigned int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  struct _D3DKMT_PRESENT_RGNS *v24; // [rsp+80h] [rbp-9h]
  struct AUTOEXPANDALLOCATION *v25; // [rsp+88h] [rbp-1h]
  const struct DXGK_PRESENT_PARAMS *v26; // [rsp+90h] [rbp+7h]
  struct DXGCONTEXT **v27; // [rsp+98h] [rbp+Fh]

  v9 = a4;
  v10 = a3;
  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 1959LL;
    return 0LL;
  }
  v14 = (DXGDXGIKEYEDMUTEX *)*((_QWORD *)this + *((unsigned int *)this + 11) + 6);
  v15 = *((_QWORD *)v14 + 1);
  if ( v15 )
  {
    v18 = *((_QWORD *)a2 + 2);
    if ( v15 != v18 )
    {
      WdLogSingleEntry2(1LL, *((_QWORD *)v14 + 1), v18);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"KeyedMutex is already been opened by device 0x%I64x so cannot open for device 0x%I64x",
        v15,
        *((_QWORD *)a2 + 2),
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    v16 = DXGDXGIKEYEDMUTEX::OpenForDevice(v14, *((struct DXGDEVICE **)a2 + 2));
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"OpenForDevice() Failed 0x%I64x", v17, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v17;
    }
  }
  v22 = a5;
  v24 = a6;
  v25 = a8;
  v26 = a7;
  v27 = a9;
  v19[0] = 0LL;
  v19[2] = 0LL;
  v23 = 0;
  v19[1] = a2;
  v20 = v10;
  v21 = v9;
  return OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v19);
}
