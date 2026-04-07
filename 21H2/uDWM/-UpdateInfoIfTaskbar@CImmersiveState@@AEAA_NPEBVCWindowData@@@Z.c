/*
 * XREFs of ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x18003C6F4
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18003C630 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1800581B6 (wcscmp_0.c)
 */

char __fastcall CImmersiveState::UpdateInfoIfTaskbar(CImmersiveState *this, HWND *a2)
{
  char v4; // di
  HMONITOR v6; // rbx
  bool v7; // al
  __int64 v8; // rdx
  __m128i v9; // xmm0
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // xmm0_8
  LONG left; // eax
  unsigned __int64 v13; // rcx
  LONG right; // eax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-D0h] BYREF
  HMONITOR v22; // [rsp+40h] [rbp-C0h]
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR ClassName[264]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  if ( GetClassNameW(a2[5], ClassName, 260)
    && (!wcscmp_0(ClassName, L"Shell_SecondaryTrayWnd") || !wcscmp_0(ClassName, L"Shell_TrayWnd")) )
  {
    v4 = 1;
    v6 = MonitorFromWindow(a2[5], 0);
    if ( v6 )
    {
      if ( !wcscmp_0(ClassName, L"Shell_TrayWnd") )
        *((_QWORD *)this + 8) = v6;
      v7 = 0;
      v8 = 0LL;
      if ( *((_DWORD *)this + 10) )
      {
        while ( !v7 )
        {
          v7 = v6 == *(HMONITOR *)(*((_QWORD *)this + 2) + 24 * v8 + 16);
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 10) )
          {
            if ( v7 )
              return v4;
            goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v6, &mi) )
        {
          v9 = *((__m128i *)a2 + 3);
          v22 = v6;
          v10 = v9.m128i_i64[0];
          v11 = _mm_srli_si128(v9, 8).m128i_u64[0];
          left = v10;
          if ( mi.rcWork.left < (int)v10 )
            left = mi.rcWork.left;
          v13 = HIDWORD(v10);
          LODWORD(v21) = left;
          if ( mi.rcWork.top < (int)v13 )
            LODWORD(v13) = mi.rcWork.top;
          DWORD1(v21) = v13;
          right = v11;
          if ( mi.rcWork.right > (int)v11 )
            right = mi.rcWork.right;
          DWORD2(v21) = right;
          v15 = HIDWORD(v11);
          if ( mi.rcWork.bottom > SHIDWORD(v11) )
            LODWORD(v15) = mi.rcWork.bottom;
          v16 = *((unsigned int *)this + 10);
          HIDWORD(v21) = v15;
          v17 = v16 + 1;
          if ( (int)v16 + 1 < (unsigned int)v16 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
          else if ( v17 <= *((_DWORD *)this + 9) )
          {
            v19 = 3 * v16;
            v20 = *((_QWORD *)this + 2);
            *(_OWORD *)(v20 + 8 * v19) = v21;
            *(_QWORD *)(v20 + 8 * v19 + 16) = v22;
            *((_DWORD *)this + 10) = v17;
          }
          else
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 0x18u, 1, &v21);
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xC0u);
          }
        }
      }
    }
  }
  return v4;
}
