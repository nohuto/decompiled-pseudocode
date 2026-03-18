/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01E94F4
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01E97EC (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x1C01E9394 (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01E9B0C (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall MapFlexibleKeys(struct tagKE *a1, char a2, struct DEVICEINFO *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  struct DEVICEINFO *v5; // r13
  struct tagKE *v7; // r15
  __int64 v8; // r11
  const unsigned __int8 *v9; // rsi
  __int64 v10; // r10
  unsigned int v11; // r11d
  char *v12; // rdi
  unsigned __int64 v13; // r14
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rdi
  __int64 v18; // r13
  char v19; // cl
  unsigned __int8 v20; // cl
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // r13
  unsigned __int8 v24; // cl
  __int64 v25; // rax
  __int16 v26; // ax
  char v27; // dl
  __int64 v28; // rdi
  unsigned __int8 *v29; // rbx
  unsigned __int8 *v30; // rbx
  __int64 v31; // rdi
  _WORD v35[2]; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+34h] [rbp-2Ch]
  unsigned int v37; // [rsp+38h] [rbp-28h]
  _BYTE v38[8]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v39[8]; // [rsp+48h] [rbp-18h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = a3;
  v7 = a1;
  LOWORD(v8) = 1;
  if ( !gdwFlexMapSize )
    return 1LL;
  while ( 1 )
  {
    v9 = (const unsigned __int8 *)gpFlexMap;
    v10 = 16LL * v4;
    if ( *((_BYTE *)gpFlexMap + v10 + 1) == a2 && *((_BYTE *)gpFlexMap + v10) == *(_BYTE *)v7 )
      break;
LABEL_29:
    if ( ++v4 >= gdwFlexMapSize )
      goto LABEL_13;
  }
  if ( *((__int16 *)v7 + 1) >= 0 || v4 != iLastMatchedTarget )
  {
    v11 = 0;
    v12 = (char *)&unk_1C026B1A0;
    while ( 1 )
    {
      v13 = (unsigned __int8)*v12;
      if ( (_BYTE)v13 == bLastVKDown )
      {
        bLastVKDown = 0;
      }
      else
      {
        if ( (((unsigned __int8)(1 << (2 * (v13 & 3))) & gafRawKeyState[v13 >> 2]) == 0) == (unsigned int)IsKeyDownSpecified(*v12, &v9[v10 + 2]) )
        {
          v3 = 0;
          LOWORD(v8) = 1;
          goto LABEL_29;
        }
        v3 = 0;
      }
      ++v11;
      ++v12;
      if ( v11 >= 0xA )
      {
        LOWORD(v8) = 1;
        goto LABEL_13;
      }
    }
  }
  iLastMatchedTarget = -1;
LABEL_13:
  if ( v4 >= gdwFlexMapSize )
    return 1LL;
  v14 = 0;
  v36 = 0;
  v15 = 0;
  if ( *((__int16 *)v7 + 1) >= 0 )
  {
    v16 = 0;
    v17 = 16LL * v4;
    v18 = v17;
    do
    {
      v19 = *((_BYTE *)gpFlexMap + v18 + 2);
      if ( !v19 )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(v19, (const unsigned __int8 *)gpFlexMap + v17 + 10) )
      {
        v21 = v14;
        v14 += v8;
        v38[v21] = v20;
        SendKeyUpDown(v20, v8);
        v3 = 0;
        v8 = 1LL;
      }
      v16 += v8;
      v18 += v8;
    }
    while ( v16 < 6 );
    v22 = v3;
    v23 = 16LL * v4;
    do
    {
      if ( *((_BYTE *)gpFlexMap + 17 * v4 + 10) == (_BYTE)v3 )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(
                            *((_BYTE *)gpFlexMap + v23 + 10),
                            (const unsigned __int8 *)gpFlexMap + v17 + 2) )
      {
        v25 = v15;
        v15 += v8;
        v39[v25] = v24;
        SendKeyUpDown(v24, 0);
        v3 = 0;
        v8 = 1LL;
      }
      v22 += v8;
      v23 += v8;
    }
    while ( v22 < 6 );
    v7 = a1;
    v5 = a3;
  }
  v26 = v3;
  v37 = v3;
  LOWORD(v36) = v3;
  v27 = *((_BYTE *)gpFlexMap + 16 * v4 + 9);
  if ( v27 == -32 )
  {
    v26 = 2;
LABEL_34:
    LOWORD(v36) = v26;
    goto LABEL_35;
  }
  if ( v27 == -31 )
  {
    v26 = 4;
    goto LABEL_34;
  }
LABEL_35:
  if ( *((__int16 *)v7 + 1) < (__int16)v3 )
    LOWORD(v36) = v8 | v26;
  v35[1] = *((unsigned __int8 *)gpFlexMap + 16 * v4 + 8);
  v35[0] = v3;
  ProcessKeyboardInputWorker(v35, v5, 0LL);
  if ( *((__int16 *)v7 + 1) >= 0 )
  {
    bLastVKDown = gbVKLastDown;
    iLastMatchedTarget = v4;
  }
  if ( v14 )
  {
    v28 = v14;
    v29 = v38;
    do
    {
      SendKeyUpDown(*v29++, 0);
      --v28;
    }
    while ( v28 );
  }
  if ( v15 )
  {
    v30 = v39;
    v31 = v15;
    do
    {
      SendKeyUpDown(*v30++, 1u);
      --v31;
    }
    while ( v31 );
  }
  return 0LL;
}
