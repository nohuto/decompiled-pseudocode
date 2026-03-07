__int64 __fastcall IopLiveDumpCaptureMemoryPages(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  __int64 v3; // r14
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+9Ch] [rbp-64h]
  __int64 *v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  __int64 *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  int v25; // [rsp+BCh] [rbp-44h]
  __int64 *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+CCh] [rbp-34h]
  __int64 *v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]
  __int64 *v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  __int64 *v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  int v40; // [rsp+10Ch] [rbp+Ch]

  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  SaveSupervisorState = 1;
  v3 = MillisecondCounter;
  v4 = IopLiveDumpCapture(a1);
  v6 = v4;
  if ( v4 < 0 || v4 == 258 )
  {
    if ( (*(_DWORD *)(a1 + 320) & 1) != 0 )
    {
      LOBYTE(v5) = 1;
      IopLiveDumpUncorralProcessors(a1 + 312, v5);
    }
    IopLiveDumpTraceMmDuplicateMemoryFailure(a1, v6);
    if ( v6 == 258 )
    {
      *(_DWORD *)(a1 + 80) |= 0x40u;
      v6 = -1073740682;
    }
  }
  else
  {
    if ( VslIsSecureKernelRunning() && (*(_QWORD *)(a1 + 696) || *(_QWORD *)(a1 + 704)) )
      VslFinalizeLiveDumpInSk((_QWORD *)(a1 + 192), (_QWORD *)(a1 + 200), a1 + 144);
    *(_QWORD *)(a1 + 480) = IopLiveDumpGetMillisecondCounter(0) - v3;
    IopLiveDumpTraceCaptureMemoryPages();
  }
  SaveSupervisorState = 0;
  if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v17 = &v8;
    v9 = *(_QWORD *)(a1 + 480);
    v20 = &v9;
    v10 = *(_QWORD *)(a1 + 488);
    v23 = &v10;
    v11 = *(_QWORD *)(a1 + 496);
    v26 = &v11;
    v12 = *(_QWORD *)(a1 + 504);
    v29 = &v12;
    v13 = *(_QWORD *)(a1 + 512);
    v32 = &v13;
    v14 = *(_QWORD *)(a1 + 520);
    v35 = &v14;
    v15 = *(_QWORD *)(a1 + 528);
    v38 = &v15;
    v18 = 8;
    v21 = 8;
    v24 = 8;
    v27 = 8;
    v30 = 8;
    v33 = 8;
    v36 = 8;
    v39 = 8;
    v8 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06280,
      (unsigned __int8 *)byte_14002BEED,
      (const GUID *)(a1 + 968),
      (const GUID *)(a1 + 952),
      0xAu,
      &v16);
  }
  return v6;
}
