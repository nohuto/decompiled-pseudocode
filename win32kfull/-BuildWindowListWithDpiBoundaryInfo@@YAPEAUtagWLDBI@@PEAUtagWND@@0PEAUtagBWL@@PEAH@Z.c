/*
 * XREFs of ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C00992CC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00991CC (UpdateMonitorForWindowAndChildren.c)
 * Callees:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C005004C (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00A35E4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00A3628 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

struct tagWLDBI *__fastcall BuildWindowListWithDpiBoundaryInfo(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagBWL *a3,
        int *a4)
{
  __int64 v4; // rbx
  char v5; // r12
  unsigned __int8 v6; // r13
  int *v7; // r15
  struct tagBWL *v8; // rsi
  struct tagWND *v9; // rbp
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rax
  struct tagWND *v14; // rdi
  __int64 v15; // r9
  __int16 v17; // r8
  char v18; // dl
  _QWORD *v19; // rax
  _DWORD *v20; // rbx
  struct tagWND *v21; // r9
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int128 v27; // [rsp+28h] [rbp-60h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  char v30; // [rsp+A0h] [rbp+18h]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v26 = 0LL;
  v30 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a3 || (v5 = 1, v8 = BuildHwndList(a1, 1, 0LL, 1), v30 = 1, v8) )
  {
    v10 = (_QWORD *)((char *)v8 + 32);
    v11 = *((_QWORD *)v8 + 4);
    if ( v11 != 1 )
    {
      v12 = &v26;
      do
      {
        LOBYTE(a2) = 1;
        v13 = HMValidateHandleNoSecure(v11, a2);
        v14 = (struct tagWND *)v13;
        if ( v13 && *(_QWORD *)(v13 + 104) && v9 && !IsTopLevelWindow(v13) )
        {
          v17 = (*(_DWORD *)(*((_QWORD *)v14 + 5) + 288LL) >> 8) & 0x1FF;
          v18 = v17 != ((*(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL) >> 8) & 0x1FF);
          if ( v14 == a1 )
            v18 |= v17 != ((*(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL) >> 8) & 0x1FF);
          if ( v18 )
          {
            v19 = (_QWORD *)Win32AllocPoolZInit(32LL, 1819767637LL);
            v20 = v19;
            if ( v19 )
            {
              *v12 = (__int64)v19;
              v12 = v19;
              *v19 = 0LL;
              v19[1] = *(_QWORD *)v14;
              if ( v14 == a1 )
              {
                v21 = v9;
                v6 = 1;
                v22 = 1;
              }
              else
              {
                v21 = (struct tagWND *)*((_QWORD *)v14 + 13);
                v22 = 0;
              }
              v20[7] = v22;
              v23 = *((_QWORD *)v14 + 5);
              v27 = *(_OWORD *)(*((_QWORD *)v21 + 5) + 104LL);
              v28 = *(_OWORD *)(v23 + 88);
              if ( IsDpiBoundaryBetweenWindows(v14, v21) )
              {
                LogicalToPhysicalInPlaceRectWithSubpixel(v24, &v27, 0LL);
                PhysicalToLogicalInPlaceRectWithSubpixel(v14, &v27, 0LL);
                v25 = 1;
              }
              else
              {
                v25 = 0;
              }
              v20[6] = v25;
              v20[4] = v28 - v27;
              v20[5] = DWORD1(v28) - DWORD1(v27);
            }
          }
        }
        v11 = *++v10;
      }
      while ( *v10 != 1LL );
      v4 = v26;
      v7 = a4;
      v5 = v30;
    }
    if ( v5 )
      FreeHwndList(v8);
  }
  if ( v7 )
    *v7 = v6;
  return (struct tagWLDBI *)v4;
}
