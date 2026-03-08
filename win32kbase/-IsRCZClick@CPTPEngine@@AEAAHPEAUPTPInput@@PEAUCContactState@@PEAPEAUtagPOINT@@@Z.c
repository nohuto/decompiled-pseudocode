/*
 * XREFs of ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C0237C10
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0235884 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::IsRCZClick(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT **a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  CPTPEngine *v8; // r11
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned __int64 *v12; // r9
  __int64 v13; // rsi
  _DWORD *v14; // rcx
  int v15; // r8d
  struct CContactState *v16; // r10
  BOOL v17; // eax
  unsigned __int64 v18; // rdx
  bool v19; // cl

  v4 = 0;
  v5 = 0LL;
  v8 = this;
  if ( (*((_DWORD *)this + 118) & 2) == 0 )
    return 0LL;
  v10 = *((_DWORD *)a2 + 12);
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 4);
    v12 = (unsigned __int64 *)((char *)a2 + 96);
    v13 = v10;
    do
    {
      if ( (*((_DWORD *)v8 + 100 * (*((_DWORD *)v12 - 9) % v11) + 302) & 0x20000000) != 0 )
      {
        v17 = PtInRect((_DWORD *)v8 + 968, *v12) && PtInRect(v14, *((_QWORD *)v16 + 3));
        if ( (v15 & 1) != 0 )
          v17 = v17 && (v15 & 0x40) == 0 && (v15 & 0x10000000) == 0;
        v18 = *((_QWORD *)v16 + 10);
        v19 = v18 > v5 || v18 == v5 && v17;
        if ( a3 )
          v19 = v16 == a3;
        if ( v19 )
        {
          v5 = *((_QWORD *)v16 + 10);
          *a4 = (struct tagPOINT *)v12;
          v4 = v17;
        }
      }
      v12 += 12;
      --v13;
    }
    while ( v13 );
  }
  return v4;
}
