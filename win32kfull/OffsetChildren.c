/*
 * XREFs of OffsetChildren @ 0x1C004CB34
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00A397C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 * Callees:
 *     OffsetWindow @ 0x1C004C918 (OffsetWindow.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C005004C (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01BB208 (ScaleDpiOffsetWithSubpixel.c)
 */

__int64 __fastcall OffsetChildren(struct tagWND *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // esi
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  float *v13; // r10
  _OWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+64h] [rbp+Ch]

  v14[0] = 0LL;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    result = DirtyVisRgnTrackers(a1);
  v9 = *((_QWORD *)a1 + 14);
  if ( v9 )
  {
    v10 = 0;
    v11 = a2;
    v12 = a3;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v14, a4, *(_QWORD *)(v9 + 40) + 88LL) )
        goto LABEL_20;
      if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v9, a1) )
      {
        v15 = a2;
        v16 = a3;
        ScaleDpiOffsetWithSubpixel(&v15, v13, (struct tagWND *)v9, a1);
        a2 = v15;
        v10 = 1;
        a3 = v16;
      }
      else
      {
        *v13 = *((float *)a1 + 56);
        *(_DWORD *)(v9 + 228) = *((_DWORD *)a1 + 57);
      }
      OffsetWindow((struct tagWND *)v9, a2, a3);
      if ( v10 )
      {
        a2 = v11;
        a3 = v12;
      }
      result = *(_QWORD *)(v9 + 112);
      v10 = 0;
      if ( !result )
      {
LABEL_20:
        while ( 1 )
        {
          result = *(_QWORD *)(v9 + 88);
          if ( result )
            break;
          v9 = *(_QWORD *)(v9 + 104);
          if ( (struct tagWND *)v9 == a1 )
            return result;
        }
      }
      v9 = result;
    }
  }
  return result;
}
