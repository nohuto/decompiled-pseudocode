/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C00A3180
 * Callers:
 *     ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C00A30C0 (-GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C001A980 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct _MDL *result; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 Pool2; // rax
  char v6; // dl
  _QWORD *v7; // r15
  unsigned __int64 v8; // rbx
  _QWORD **v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  char v12; // bp
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+A8h] [rbp+10h]
  __int64 v23; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v24; // [rsp+B8h] [rbp+20h]

  if ( *((_DWORD *)this + 54) != 4 || !*((_BYTE *)this + 128) )
    return 0LL;
  result = (struct _MDL *)*((_QWORD *)this + 12);
  if ( !result )
  {
    v3 = *(_QWORD *)(**((_QWORD **)this + 28) + 8LL);
    v24 = v3 >> 12;
    v4 = 8 * (v3 >> 12) + 48;
    Pool2 = ExAllocatePool2(64LL, v4, 892561750LL);
    *((_QWORD *)this + 12) = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 40) = v3;
      v6 = 0;
      v7 = 0LL;
      *(_WORD *)(*((_QWORD *)this + 12) + 8LL) = v4;
      *(_QWORD *)(*((_QWORD *)this + 12) + 32LL) = *((_QWORD *)this + 6);
      *(_QWORD *)(*((_QWORD *)this + 12) + 16LL) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL)
                                                                           + 8LL)
                                                               + 8LL);
      v8 = *((_QWORD *)this + 6);
      v9 = (_QWORD **)(*((_QWORD *)this + 10) + 96LL);
      v22 = v8 + v3;
      v23 = *((_QWORD *)this + 12) + 48LL;
      v10 = *v9;
      if ( *v9 == v9 )
        goto LABEL_24;
      do
      {
        if ( v6 )
          break;
        v11 = v10 - 3;
        v10 = (_QWORD *)*v10;
        if ( v11[2] > v8 )
        {
          v6 = 1;
          v7 = v11;
        }
      }
      while ( v10 != v9 );
      if ( !v7 || v7[1] > v8 )
      {
LABEL_24:
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 17LL, v7, 0LL);
      }
      v12 = 0;
      v13 = 0LL;
      while ( 1 )
      {
        v14 = v7[1];
        v15 = v7[2];
        v16 = (v8 - v14) >> 12;
        if ( v22 <= v15 )
        {
          v15 = v22;
          v12 = 1;
        }
        v17 = ((v15 - v14) >> 12) - v16;
        memmove((void *)(v23 + 8 * v13), (const void *)(*v7 + 8 * (v16 + 6)), 8 * v17);
        v18 = v7[3];
        v13 += v17;
        v8 = v7[2];
        v19 = v7[5] + 8LL;
        v7 = (_QWORD *)(v18 - 24);
        if ( v18 == v19 )
          v7 = 0LL;
        if ( v12 )
          break;
        if ( v7[1] != v8 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 18LL, v7, 0LL);
        }
      }
      if ( v13 != v24 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 19LL, v13, 0LL);
      }
      return (struct _MDL *)*((_QWORD *)this + 12);
    }
    else
    {
      _InterlockedIncrement(&dword_1C0076864);
      WdLogSingleEntry1(6LL, 4262LL);
      DxgkLogInternalTriageEvent(v20, 262145LL);
      return 0LL;
    }
  }
  return result;
}
