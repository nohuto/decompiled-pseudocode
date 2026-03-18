/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00BF48C
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     CreateBitmapStrip @ 0x1C00C6030 (CreateBitmapStrip.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C00C3180 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(unsigned int a1)
{
  __int64 *v1; // rbx
  unsigned int v2; // esi
  HDC v3; // r14
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int16 *v8; // rbp
  __int64 v9; // r12
  __int16 *v10; // rdi
  LONG v11; // ebx
  LONG v12; // r15d
  unsigned int v13; // r9d
  LONG v14; // eax
  HBRUSH v15; // r8
  RECT v16; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v1 = (__int64 *)((char *)&gOemBitmapSet + 760 * a1);
  if ( a1 )
    v2 = 24 * (a1 + 3);
  else
    v2 = *(unsigned __int16 *)(gpsi + 6998LL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  EnsureOemBitmapInfoForDpiSlot((struct OEMBITMAPSET *)v1, v2);
  result = GreCreateCompatibleBitmapInternal(
             *(HDC *)(gpDispInfo + 56LL),
             *((_DWORD *)v1 + 2),
             *((_DWORD *)v1 + 3),
             0,
             0LL,
             0LL);
  v5 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(v3, v5);
    if ( *v1 )
      GreDeleteObject(*v1);
    *v1 = v5;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
    v8 = (unsigned __int16 *)&unk_1C02E8A02;
    v9 = 93LL;
    v10 = (__int16 *)(v1 + 2);
    do
    {
      if ( v10[2] )
      {
        v11 = *v10;
        v12 = v10[1];
        v7 = *(v8 - 1);
        v13 = *v8;
        v16.right = v11 + v10[2];
        v14 = v12 + v10[3];
        v16.left = v11;
        v16.top = v12;
        v16.bottom = v14;
        if ( (_DWORD)v7 == 0xFFFF )
        {
          if ( (v13 & 1) != 0 )
          {
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
            {
              if ( (v13 & 0x100) != 0 )
                v15 = *(HBRUSH *)(gpsi + 4720LL);
              else
                v15 = *(HBRUSH *)(gpsi + 4712LL);
            }
            else if ( (v13 & 0x100) != 0 )
            {
              v15 = *(HBRUSH *)(gpsi + 4920LL);
            }
            else
            {
              v15 = *(HBRUSH *)(gpsi + 4912LL);
            }
            FillRect(v3, &v16, v15);
            BitBltSysBmp(v3, 0);
            GetDpiDependentMetric(12LL, v2);
            BitBltSysBmp(v3, 0);
            GetDpiDependentMetric(12LL, v2);
            BitBltSysBmp(v3, 0);
            GetDpiDependentMetric(12LL, v2);
            BitBltSysBmp(v3, 0);
          }
        }
        else
        {
          DrawFrameControl(v3, &v16, v7, v13);
        }
      }
      v10 += 4;
      v8 += 2;
      --v9;
    }
    while ( v9 );
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17, v6, v7);
    return 1LL;
  }
  return result;
}
