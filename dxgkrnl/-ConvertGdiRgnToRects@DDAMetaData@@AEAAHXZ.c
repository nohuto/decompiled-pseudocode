/*
 * XREFs of ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C032D01C
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C032CCA8 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C032D410 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertGdiRgnToRects(DDAMetaData *this)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  unsigned __int64 v4; // rbx
  unsigned int v5; // r14d
  unsigned int *v6; // rbx
  unsigned int v7; // r15d
  unsigned int (__fastcall *v8)(_QWORD, struct tagRECT *); // rbx
  struct tagRECT *DirtyRectData; // rax
  __int64 v10; // rbx
  const wchar_t *v11; // r9
  void *Buffer; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 112LL))(
         *((_QWORD *)this + 8),
         0LL,
         0LL);
  v3 = v2;
  v4 = ((unsigned __int64)v2 - 32) >> 4;
  if ( (unsigned int)v4 <= *((_DWORD *)this + 5) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)this + 4), v2, 0);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)this + 7) + 112LL))(
            *((_QWORD *)this + 8),
            v3,
            Buffer) )
    {
      v10 = 1161LL;
      WdLogSingleEntry1(2LL, 1161LL);
      v11 = L"Failed to get dirty rects from region";
      goto LABEL_11;
    }
  }
  else
  {
    v5 = 0;
    if ( *((_DWORD *)this + 11) )
    {
      v6 = (unsigned int *)(**((_QWORD **)this + 6) + 16LL);
      while ( 1 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*((_QWORD *)this + 7) + 96LL))(
               *((_QWORD *)this + 9),
               *(v6 - 2),
               *(v6 - 1),
               *v6,
               v6[1]);
        if ( !v7 )
          break;
        if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 9),
                2LL) )
        {
          WdLogSingleEntry1(2LL, 1135LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to combine move rect with dirty region",
            1135LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return v7;
        }
        ++v5;
        v6 += 6;
        if ( v5 >= *((_DWORD *)this + 11) )
          goto LABEL_7;
      }
      v10 = 1129LL;
      WdLogSingleEntry1(2LL, 1129LL);
      v11 = L"Failed to set tmp region to current dirty rect";
      goto LABEL_11;
    }
LABEL_7:
    v8 = *(unsigned int (__fastcall **)(_QWORD, struct tagRECT *))(*((_QWORD *)this + 7) + 120LL);
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, 1u);
    if ( !v8(*((_QWORD *)this + 8), DirtyRectData) )
    {
      v10 = 1143LL;
      WdLogSingleEntry1(2LL, 1143LL);
      v11 = L"Failed to get bounding box";
LABEL_11:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    *((_DWORD *)this + 11) = 0;
    LODWORD(v4) = 1;
    *((_DWORD *)this + 4) = 1;
  }
  *((_DWORD *)this + 6) = v4;
  return 1LL;
}
