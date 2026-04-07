/*
 * XREFs of ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B5250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000ADB8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18002F7CC (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B160C (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 */

char __fastcall CVirtualDesktopSwitch::_WindowEnumCallback(__int64 a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // ebx
  int v8; // ecx
  int v9; // r14d
  __int64 v10; // r15
  struct tagRECT v11; // xmm6
  __m128i v12; // xmm0
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  struct tagRECT *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  CBaseObject *v21; // rdi
  int v22; // eax
  struct tagRECT *v23; // rcx
  CBaseObject *v25; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v26; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT v28; // [rsp+68h] [rbp-9h] BYREF

  v4 = 0;
  v25 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 176);
    if ( v8 == *(_DWORD *)(a1 + 144) )
    {
      v9 = *((_DWORD *)a2 + 154) & 0xFFF;
      if ( (unsigned int)(v9 - 75) <= 1 )
      {
        v10 = 0LL;
        if ( v8 )
        {
          while ( 1 )
          {
            v12 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 152) + 16LL * (unsigned int)v10), 8);
            v26 = *(struct tagRECT *)(*(_QWORD *)(a1 + 152) + 16LL * (unsigned int)v10);
            v11 = v26;
            rc = v26;
            v13 = _mm_cvtsi128_si32(v12) - _mm_cvtsi128_si32((__m128i)v26);
            v14 = 0;
            if ( v13 >= 0 )
              v14 = v13;
            v15 = -v14;
            if ( v9 != 75 )
              v15 = v14;
            OffsetRect(&rc, v15, 0);
            v28 = v11;
            OffsetRect(&v28, -v15, 0);
            v16 = CStoryboard::_AddAnimationComponent(
                    (CStoryboard *)a1,
                    *(struct CAnimationComponent **)(*(_QWORD *)(a1 + 120) + 8 * v10));
            v4 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v16,
                0x12F4u);
              goto LABEL_20;
            }
            CAnimatedTransitionVisual::SetBeginRect(
              *(struct tagPOINT **)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v10) + 40LL),
              &v26);
            v17 = *(struct tagRECT **)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v10) + 40LL);
            v17[54] = rc;
            CVisual::SetDirtyFlags((CVisual *)&v17->right, 4096);
            v18 = *(_QWORD *)(a1 + 120);
            v26 = v11;
            v19 = *(_QWORD *)(v18 + 8 * v10);
            *(struct tagRECT *)(v19 + 104) = v11;
            *(_DWORD *)(v19 + 68) = 2;
            v20 = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v26, 0, &v25);
            v21 = v25;
            v4 = v20;
            if ( v20 < 0 )
              break;
            v22 = CStoryboard::_AddAnimationComponent((CStoryboard *)a1, v25);
            v4 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v22,
                0x12FBu);
              goto LABEL_17;
            }
            CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v21 + 5), &v28);
            v23 = (struct tagRECT *)*((_QWORD *)v21 + 5);
            v23[54] = v11;
            CVisual::SetDirtyFlags((CVisual *)&v23->right, 4096);
            *((_DWORD *)v21 + 17) = 2;
            *(struct tagRECT *)((char *)v21 + 104) = v11;
            CBaseObject::Release(v21);
            v25 = 0LL;
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 176) )
              goto LABEL_20;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x12FAu);
LABEL_17:
          if ( v21 )
            CBaseObject::Release(v21);
        }
      }
    }
    else
    {
      v4 = -2147019873;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        -2147019873,
        0x12DBu);
    }
  }
LABEL_20:
  *a4 = v4;
  return 1;
}
