/*
 * XREFs of ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0201FE4
 * Callers:
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C01FF354 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x1C00E9C0C (-FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C00E9C5A (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 */

void __fastcall CPTPEngine::ProcessGestureFrame(CPTPEngine *this, struct PTPInput *a2, int a3, int *a4)
{
  __int64 v4; // rax
  CPTPEngine *v6; // r10
  __int64 *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  _BYTE *v17; // rbp
  __int128 v18; // xmm1
  _DWORD *v19; // r9
  int v20; // edi
  _BYTE *v21; // r8
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v27; // r11d
  __int64 v28; // rbx
  __int64 v29; // r8
  bool v30; // bl
  char v31; // bp
  __int64 v32; // rdi
  char v33; // di
  unsigned int v34; // esi
  char v35; // bl
  char v36; // r8
  char *v37; // r9
  __int64 v38; // r11
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  BOOL v42; // r8d
  __int64 v43; // r11
  __int64 v44; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-298h]
  _BYTE v46[12]; // [rsp+78h] [rbp-290h] BYREF
  char v47; // [rsp+84h] [rbp-284h] BYREF

  v4 = 4LL;
  v6 = this;
  v8 = &v44;
  do
  {
    v9 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v8 = *(_OWORD *)a2;
    v10 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 1) = v9;
    v11 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v8 + 2) = v10;
    v12 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v8 + 3) = v11;
    v13 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v8 + 4) = v12;
    v14 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v8 + 5) = v13;
    v15 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v8 + 6) = v14;
    v8 += 16;
    *((_OWORD *)v8 - 1) = v15;
    --v4;
  }
  while ( v4 );
  v16 = *((_QWORD *)a2 + 14);
  v17 = 0LL;
  v18 = *((_OWORD *)a2 + 1);
  v19 = 0LL;
  v20 = 0;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  v21 = v46;
  v22 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v8 + 1) = v18;
  v23 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v8 + 2) = v22;
  v24 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v8 + 3) = v23;
  v25 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v8 + 4) = v24;
  v26 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v8 + 5) = v25;
  *((_OWORD *)v8 + 6) = v26;
  v8[14] = v16;
  v27 = v45;
  if ( (_DWORD)v45 )
  {
    v28 = (unsigned int)v45;
    do
    {
      v19 = (_DWORD *)((char *)v6 + 400 * (unsigned int)(*((_DWORD *)v21 + 1) % *((_DWORD *)v6 + 4)) + 1208);
      if ( (*v19 & 1) != 0 && (*v19 & 0x400) == 0 )
      {
        ++v20;
        v17 = v21;
      }
      v21 += 96;
      --v28;
    }
    while ( v28 );
  }
  v29 = v44;
  v30 = !a3
     && *((_DWORD *)v6 + 907) > 2u
     && v44 - *((_QWORD *)v6 + 481) < *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 99) / 0x3E8;
  if ( v20 != 1 || (*((_DWORD *)v17 + 3) & 0x40000) != 0 )
  {
    v31 = 0;
  }
  else
  {
    v31 = 1;
    if ( (*v19 & 0x20000) != 0 )
    {
      v32 = *((_QWORD *)v6 + 479);
    }
    else
    {
      v32 = v44;
      *v19 |= 0x20000u;
      *((_QWORD *)v6 + 479) = v29;
    }
    if ( v29 - v32 >= *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 61) / 0x3E8 )
    {
      *v19 &= ~0x20000u;
LABEL_21:
      v33 = 1;
      goto LABEL_22;
    }
  }
  if ( v30 )
    goto LABEL_21;
  v33 = 0;
LABEL_22:
  v34 = 0;
  v35 = 0;
  v36 = 1;
  if ( v27 )
  {
    v37 = &v47;
    do
    {
      v38 = 400LL * (unsigned int)(*((_DWORD *)v37 - 2) % *((_DWORD *)v6 + 4));
      v39 = *(_DWORD *)((char *)v6 + v38 + 1208);
      v40 = v39;
      if ( (v39 & 1) != 0 && v33 && (v39 & 2) != 0 )
      {
        v40 = v39 | 0x400;
        *(_DWORD *)((char *)v6 + v38 + 1208) = v39 | 0x400;
      }
      if ( (v40 & 1) == 0 || (v40 & 0x400) != 0 )
      {
        *(_DWORD *)v37 = 0;
        *(_QWORD *)(v37 + 28) = 0LL;
      }
      else
      {
        v41 = *(_DWORD *)v37;
        v42 = v40 < 0 || (v41 & 0x2000) != 0;
        if ( (v40 & 2) != 0 )
        {
          v41 = v41 & 0xFFFCFFFF | 0x10000;
          *(_DWORD *)v37 = v41;
        }
        if ( v33 )
        {
          *(_DWORD *)v37 = 0x40000;
        }
        else if ( (v41 & 0x40000) == 0 )
        {
          v35 = 1;
        }
        CPTPEngine::FixupGestureContact(v6, (struct PTPEnginePointerNode *)(v37 - 12), v42);
        v36 = 0;
        if ( !v31 )
          *(_DWORD *)((char *)v6 + v43 + 1208) &= ~0x20000u;
      }
      v27 = v45;
      ++v34;
      v37 += 96;
    }
    while ( v34 < (unsigned int)v45 );
  }
  if ( !v33 && !v36 && v35 || (*a4 = 1, !v36) )
    CBasePTPEngine::SendGestureOutput((__int64)v6, 3, a3, v27, v46);
}
