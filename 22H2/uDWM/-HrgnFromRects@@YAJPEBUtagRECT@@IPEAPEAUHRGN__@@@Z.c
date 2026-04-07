/*
 * XREFs of ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180021130
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180020970 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180057E5A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrgnFromRects(const struct tagRECT *Src, unsigned int a2, HRGN *a3)
{
  unsigned __int64 v3; // rbx
  DWORD v7; // ebp
  signed int v8; // r12d
  __int64 v9; // rdi
  unsigned __int128 v10; // xmm0
  LONG v11; // edx
  LONG *p_right; // rax
  LONG v13; // r9d
  __int64 v14; // r8
  LONG v15; // r10d
  LONG v16; // r11d
  HRGN Region; // rax
  signed int LastError; // eax
  unsigned __int128 v20; // [rsp+30h] [rbp-28h]

  v3 = 16LL * a2;
  if ( v3 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xC5u);
    return 2147942934LL;
  }
  else
  {
    v7 = v3 + 36;
    if ( (int)v3 + 36 < (unsigned int)v3 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xC6u);
      return 2147942934LL;
    }
    else
    {
      v8 = 0;
      v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             v7);
      if ( v9 )
      {
        v10 = (unsigned __int128)*Src;
        if ( a2 > 1 )
        {
          v11 = HIDWORD(*(unsigned __int128 *)Src);
          p_right = &Src[1].right;
          v13 = *(_QWORD *)&Src->right;
          v14 = a2 - 1;
          v15 = HIDWORD(*(_QWORD *)&Src->left);
          v16 = (LONG)*Src;
          do
          {
            if ( *(p_right - 2) < v16 )
              v16 = *(p_right - 2);
            if ( *(p_right - 1) < v15 )
              v15 = *(p_right - 1);
            if ( *p_right > v13 )
              v13 = *p_right;
            if ( p_right[1] > v11 )
              v11 = p_right[1];
            p_right += 4;
            --v14;
          }
          while ( v14 );
          *((_QWORD *)&v20 + 1) = __PAIR64__(v11, v13);
          *(_QWORD *)&v20 = __PAIR64__(v15, v16);
          v10 = v20;
        }
        *(_DWORD *)v9 = 32;
        *(_DWORD *)(v9 + 4) = 1;
        *(_DWORD *)(v9 + 8) = a2;
        *(_DWORD *)(v9 + 12) = v3;
        *(_OWORD *)(v9 + 16) = v10;
        memcpy_0((void *)(v9 + 32), Src, (unsigned int)v3);
        SetLastError(0);
        Region = ExtCreateRegion(0LL, v7, (const RGNDATA *)v9);
        if ( Region )
        {
          *a3 = Region;
        }
        else
        {
          LastError = GetLastError();
          v8 = LastError;
          if ( LastError > 0 )
            v8 = (unsigned __int16)LastError | 0x80070000;
          if ( v8 >= 0 )
            v8 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xEAu);
        }
        (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v9);
        return (unsigned int)v8;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xCFu);
        return 2147942414LL;
      }
    }
  }
}
