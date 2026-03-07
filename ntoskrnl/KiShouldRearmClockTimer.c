char __fastcall KiShouldRearmClockTimer(__int64 a1, char a2)
{
  __int64 InterruptTimePrecise; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  int ClockTimerEarliestDeadline; // eax
  LARGE_INTEGER v9; // r8
  __int64 v10; // r9
  int v11; // r14d
  LARGE_INTEGER v12; // r10
  LARGE_INTEGER v13; // r11
  unsigned int v14; // edx
  bool v15; // cc
  char v16; // al
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+31h] [rbp-CFh] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  LARGE_INTEGER v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v23; // [rsp+50h] [rbp-B0h] BYREF
  LONGLONG v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  char *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  __int64 *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  int *v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  LARGE_INTEGER *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  LONGLONG *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  LARGE_INTEGER *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  char *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]

  if ( !*(_BYTE *)(a1 + 36488) )
    return 1;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v20);
  LOBYTE(v6) = a2;
  v7 = InterruptTimePrecise;
  ClockTimerEarliestDeadline = KiGetClockTimerEarliestDeadline(a1, v6);
  v9 = *(LARGE_INTEGER *)(a1 + 36352);
  v10 = (unsigned int)KeMinimumIncrement;
  v11 = ClockTimerEarliestDeadline;
  v12.QuadPart = (unsigned int)KeMinimumIncrement + v7;
  v13 = *(LARGE_INTEGER *)(a1 + 16LL * ClockTimerEarliestDeadline + 36376);
  v14 = *(_DWORD *)(a1 + 16LL * ClockTimerEarliestDeadline + 36384);
  if ( v14 >= KeMinimumIncrement )
    v10 = v14;
  if ( v12.QuadPart > (unsigned __int64)(v13.QuadPart + v10) )
  {
    v15 = v9.QuadPart <= (unsigned __int64)v12.QuadPart;
  }
  else
  {
    if ( v9.QuadPart < (unsigned __int64)v13.QuadPart )
      return 1;
    v15 = v9.QuadPart <= (unsigned __int64)(v13.QuadPart + v10);
  }
  if ( !v15 )
    return 1;
  if ( (unsigned int)dword_140C02F28 > 5 )
  {
    v16 = *(_BYTE *)(a1 + 33);
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v17 = v16;
    v26 = &v17;
    v29 = &v21;
    v32 = &v22;
    v35 = &v19;
    v38 = &v23;
    v41 = &v24;
    v44 = &v20;
    v47 = &v18;
    v30 = 8;
    v33 = 8;
    v39 = 8;
    v24 = v13.QuadPart + v10;
    v42 = 8;
    v20 = v9;
    v45 = 8;
    v27 = 1;
    v21 = v7;
    v22 = (unsigned int)KeMinimumIncrement + v7;
    v19 = v11;
    v36 = 4;
    v23 = v13;
    v18 = a2;
    v48 = 1;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02F28,
      (unsigned __int8 *)byte_14002D028,
      0LL,
      0LL,
      0xAu,
      &v25);
  }
  return 0;
}
