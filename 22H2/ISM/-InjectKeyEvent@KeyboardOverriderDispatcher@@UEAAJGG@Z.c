/*
 * XREFs of ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800B51A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B5780 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::InjectKeyEvent(
        KeyboardOverriderDispatcher *this,
        unsigned __int16 a2,
        __int16 a3)
{
  char v4; // di
  __int64 v7; // rsi
  const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *v8; // r14
  __int16 v9; // r8
  __int64 *v10; // rax
  _OWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v28; // [rsp+170h] [rbp+70h]
  _WORD v29[2]; // [rsp+190h] [rbp+90h] BYREF
  __int16 v30; // [rsp+194h] [rbp+94h]
  __int64 v31; // [rsp+1B8h] [rbp+B8h]
  __int128 v32; // [rsp+1C0h] [rbp+C0h]

  v4 = a2;
  if ( a2 != 1 && (a2 <= 3u || a2 > 5u) )
    return 2147942487LL;
  v7 = 0LL;
  if ( *((_BYTE *)this + 432) && a3 == *((_WORD *)this + 208) )
  {
    v8 = (KeyboardOverriderDispatcher *)((char *)this + 64);
    if ( (a2 & 1) != 0 )
    {
      *((_WORD *)this + 212) &= ~0x8000u;
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (KeyboardOverriderDispatcher *)((char *)this + 64));
    }
    if ( (v4 & 4) != 0 )
    {
      *((_WORD *)this + 212) |= 0x8000u;
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(this, v8);
    }
    *((_BYTE *)this + 432) = 0;
    memset_0(v8, 0, 0x170uLL);
  }
  else
  {
    memset_0(v29, 0, 0x40uLL);
    v29[1] = a3;
    v29[0] = -2;
    v9 = 128;
    v10 = (__int64 *)*((_QWORD *)this + 3);
    v30 = 128;
    if ( v10 )
      v7 = *v10;
    v11 = *(_OWORD **)(*(_QWORD *)(v7 + 8) + 8 * (*((_QWORD *)this + 6) & (*(_QWORD *)(v7 + 16) - 1LL)));
    v12 = &v27;
    v13 = 2LL;
    do
    {
      v14 = v11[1];
      *(_OWORD *)v12 = *v11;
      v15 = v11[2];
      *((_OWORD *)v12 + 1) = v14;
      v16 = v11[3];
      *((_OWORD *)v12 + 2) = v15;
      v17 = v11[4];
      *((_OWORD *)v12 + 3) = v16;
      v18 = v11[5];
      *((_OWORD *)v12 + 4) = v17;
      v19 = v11[6];
      *((_OWORD *)v12 + 5) = v18;
      v20 = v11[7];
      v11 += 8;
      *((_OWORD *)v12 + 6) = v19;
      v12 += 16;
      *((_OWORD *)v12 - 1) = v20;
      --v13;
    }
    while ( v13 );
    v21 = v11[1];
    *(_OWORD *)v12 = *v11;
    v22 = v11[2];
    *((_OWORD *)v12 + 1) = v21;
    v23 = v11[3];
    *((_OWORD *)v12 + 2) = v22;
    v24 = v11[4];
    *((_OWORD *)v12 + 3) = v23;
    v25 = v11[5];
    *((_OWORD *)v12 + 4) = v24;
    v26 = v11[6];
    *((_OWORD *)v12 + 5) = v25;
    *((_OWORD *)v12 + 6) = v26;
    v31 = v27;
    v32 = v28;
    if ( (v4 & 1) != 0 )
    {
      NtMITSynthesizeKeyboardInput(8LL, v29, (char *)this + 472);
      v9 = v30;
    }
    if ( (v4 & 4) != 0 )
    {
      v30 = v9 | 1;
      NtMITSynthesizeKeyboardInput(8LL, v29, (char *)this + 472);
    }
  }
  return 0LL;
}
