/*
 * XREFs of ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C02017C4
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01FF558 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::IsRCZClick(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT **a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  CPTPEngine *v8; // r11
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned __int64 *v12; // r9
  __int64 v13; // rsi
  _DWORD *v14; // r10
  _DWORD *v15; // rcx
  int v16; // r8d
  struct CContactState *v17; // r10
  BOOL v18; // eax
  unsigned __int64 v19; // rdx
  bool v20; // cl

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
      v14 = (_DWORD *)((char *)v8 + 400 * (*((_DWORD *)v12 - 9) % v11) + 1208);
      if ( (*v14 & 0x20000000) != 0 && v14[7] >= *((_DWORD *)v8 + 969) )
      {
        v18 = PtInRect((_DWORD *)v8 + 968, *v12) && PtInRect(v15, *((_QWORD *)v17 + 3));
        if ( (v16 & 1) != 0 )
          v18 = v18 && (v16 & 0x40) == 0 && (v16 & 0x10000000) == 0;
        v19 = *((_QWORD *)v17 + 10);
        v20 = v19 > v5 || v19 == v5 && v18;
        if ( a3 )
          v20 = v17 == a3;
        if ( v20 )
        {
          v5 = *((_QWORD *)v17 + 10);
          *a4 = (struct tagPOINT *)v12;
          v4 = v18;
        }
      }
      v12 += 12;
      --v13;
    }
    while ( v13 );
  }
  return v4;
}
