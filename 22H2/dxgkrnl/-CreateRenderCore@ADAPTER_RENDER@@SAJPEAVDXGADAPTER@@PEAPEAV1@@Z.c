/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01917E8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C018F684 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C00370E4 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01869A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C019B054 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0216060 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2)
{
  __int64 (__fastcall *v4)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  __int64 (__fastcall *v5)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 (__fastcall *v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  ADAPTER_RENDER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ADAPTER_RENDER *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v26 + 24) = 479LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v27 + 24) = 480LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !*((_BYTE *)a1 + 209) )
  {
    if ( !*((_BYTE *)a1 + 352)
      || !a1[46]
      || !a1[48]
      || !a1[49]
      || !a1[78]
      || !a1[79]
      || !a1[50]
      || !a1[54]
      || !a1[55]
      || !a1[56]
      || !a1[60]
      || !a1[61]
      || !a1[64] && *((int *)a1 + 649) < 2000
      || !a1[75] && ((_DWORD)a1[321] & 8) == 0
      || !a1[77]
      || !a1[63]
      || !a1[81] )
    {
      if ( *((int *)a1 + 649) < 1200 )
      {
        v25 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v25 + 24) = 556LL;
      }
      else
      {
        if ( !a1[46]
          && !a1[48]
          && !a1[49]
          && !a1[78]
          && !a1[79]
          && !a1[50]
          && !a1[54]
          && !a1[55]
          && !a1[56]
          && !a1[60]
          && !a1[61]
          && !a1[64]
          && !a1[77]
          && !a1[81]
          && !a1[47]
          && !a1[53]
          && !a1[80]
          && !a1[88]
          && !a1[51]
          && !a1[52]
          && !a1[74]
          && !a1[76]
          && !a1[82]
          && !a1[83]
          && !a1[84] )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = 544LL;
          result = 0LL;
          *a2 = 0LL;
          return result;
        }
        v25 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v25 + 24) = 538LL;
      }
      goto LABEL_139;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = 508LL;
    v4 = a1[76];
    if ( !v4 )
    {
      a1[76] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v4 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v5 = a1[82];
    if ( !v5 )
    {
      a1[82] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v5 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v6 = a1[83];
    if ( !v6 )
    {
      a1[83] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v6 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    v7 = a1[84];
    if ( !v7 )
    {
      a1[84] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      v7 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    }
    if ( !a1[74] )
      a1[74] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[51] )
      a1[51] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( !a1[52] )
      a1[52] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    if ( v4 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      if ( v5 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v6 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
        && v7 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      {
        goto LABEL_41;
      }
    }
    else if ( v7 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v6 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           && v5 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
LABEL_41:
      v8 = *((unsigned int *)a1 + 582);
      if ( (((_DWORD)v8 - 4096) & 0xFFFFFCFF) != 0 || (_DWORD)v8 == 4352 || a1[47] && a1[53] && a1[80] )
      {
        v9 = *((_DWORD *)a1 + 511);
        if ( (v9 & 4) != 0 )
        {
          if ( !a1[88] )
          {
            v28 = WdLogNewEntry5_WdError(v8, v7);
            *(_QWORD *)(v28 + 24) = 638LL;
LABEL_113:
            WdLogEvent5_WdError(v28);
            return 3221225485LL;
          }
          if ( *((int *)a1 + 649) < 1105 )
          {
            v30 = WdLogNewEntry5_WdWarning(v8, v7, v4);
            *(_QWORD *)(v30 + 24) = a1;
            WdLogEvent5_WdWarning(v30);
            *((_DWORD *)a1 + 511) &= ~4u;
            v9 = *((_DWORD *)a1 + 511);
            a1[88] = 0LL;
          }
          if ( (v9 & 0x20000000) != 0 )
          {
            v28 = WdLogNewEntry5_WdError(v8, v7);
            *(_QWORD *)(v28 + 24) = 650LL;
            goto LABEL_113;
          }
        }
        if ( *((_DWORD *)a1 + 509) > 4u )
          *((_DWORD *)a1 + 509) = 4;
        if ( !*((_DWORD *)a1 + 508)
          || a1[51] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
          && a1[52] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
        {
          v10 = *((_DWORD *)a1 + 514);
          if ( (v10 & 1) != 0 )
          {
            if ( *((int *)a1 + 582) >= 0x2000 )
              goto LABEL_61;
            v11 = *((_DWORD *)a1 + 517);
            if ( v11 )
            {
              v12 = *((_DWORD *)a1 + 70) * v11;
              if ( v12 > 0x40 && *((int *)a1 + 649) <= 2400 )
              {
                v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, 0x2000LL, v4);
                v29[3] = a1;
                v29[4] = 64LL;
                v29[5] = *((unsigned int *)a1 + 70);
                v29[6] = *((unsigned int *)a1 + 517);
                goto LABEL_115;
              }
              *((_DWORD *)a1 + 648) = v12;
LABEL_61:
              if ( *((_BYTE *)a1 + 2608)
                && *((int *)a1 + 582) >= 4608
                && (!*((_DWORD *)a1 + 630)
                 || !*((_DWORD *)a1 + 631)
                 || !*((_BYTE *)a1 + 2530)
                 || (*((_DWORD *)a1 + 513) & 2) == 0
                 || (*((_DWORD *)a1 + 87) & 0x10) == 0 && (*((_DWORD *)a1 + 511) & 4) == 0) )
              {
                v28 = WdLogNewEntry5_WdError(v8, 0x2000LL);
                *(_QWORD *)(v28 + 24) = 729LL;
                goto LABEL_113;
              }
              v13 = *((unsigned int *)a1 + 582);
              if ( (int)v13 >= 0x2000 && (*((_DWORD *)a1 + 513) & 2) == 0 )
              {
                v28 = WdLogNewEntry5_WdError(v13, 0x2000LL);
                *(_QWORD *)(v28 + 24) = *((unsigned int *)a1 + 513);
                goto LABEL_113;
              }
              if ( (int)v13 >= 4864 && !a1[98] )
              {
                v28 = WdLogNewEntry5_WdError(v13, 0x2000LL);
                *(_QWORD *)(v28 + 24) = 751LL;
                goto LABEL_113;
              }
              if ( (int)v13 >= 9216 && (*((_DWORD *)a1 + 515) & 0x800) != 0 && (!a1[156] || !a1[157]) )
              {
                v28 = WdLogNewEntry5_WdError(v13, 0x2000LL);
                *(_QWORD *)(v28 + 24) = 766LL;
                goto LABEL_113;
              }
              goto LABEL_68;
            }
          }
          else if ( (v10 & 4) == 0 && (v10 & 0x10) == 0 )
          {
            *((_DWORD *)a1 + 517) = 1;
            *((_DWORD *)a1 + 648) = 1;
            goto LABEL_61;
          }
          v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, 0x2000LL, v4);
          v29[3] = a1;
LABEL_115:
          WdLogEvent5_WdWarning(v29);
          return 3221225485LL;
        }
        v25 = WdLogNewEntry5_WdError(v8, v7);
        *(_QWORD *)(v25 + 24) = 665LL;
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v8, v7);
        *(_QWORD *)(v25 + 24) = 629LL;
      }
LABEL_139:
      WdLogEvent5_WdError(v25);
      return 3221225561LL;
    }
    v25 = WdLogNewEntry5_WdError(v6, v7);
    *(_QWORD *)(v25 + 24) = 609LL;
    goto LABEL_139;
  }
LABEL_68:
  v14 = (ADAPTER_RENDER *)operator new(0x680uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v14 )
    v19 = ADAPTER_RENDER::ADAPTER_RENDER(v14, (struct DXGADAPTER *)a1);
  else
    v19 = 0LL;
  if ( v19 )
  {
    v22 = ADAPTER_RENDER::Initialize(v19);
    if ( v22 < 0 )
    {
      ADAPTER_RENDER::Destroy(v19);
      ADAPTER_RENDER::`scalar deleting destructor'(v19);
    }
    else
    {
      v23 = WdLogNewEntry5_WdEvent(v21, v20);
      *(_QWORD *)(v23 + 24) = v19;
      *(_QWORD *)(v23 + 32) = a1;
      WdLogEvent5_WdEvent(v23);
      *a2 = v19;
    }
    return (unsigned int)v22;
  }
  else
  {
    v31 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v31);
    return 3221225495LL;
  }
}
