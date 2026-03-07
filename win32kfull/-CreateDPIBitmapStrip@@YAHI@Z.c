__int64 __fastcall CreateDPIBitmapStrip(unsigned int a1)
{
  __int64 *v1; // rbx
  int v2; // ebp
  HDC v3; // r15
  __int64 result; // rax
  __int64 v5; // rdi
  __int16 *v6; // r14
  __int64 v7; // r13
  __int16 *v8; // rsi
  LONG v9; // ebx
  LONG v10; // r12d
  int v11; // r8d
  __int16 v12; // r9
  LONG v13; // eax
  HBRUSH v14; // r8
  int v15; // ebx
  int v16; // r12d
  int v17; // ebx
  int v18; // edi
  int DpiDependentMetric; // eax
  RECT v20; // [rsp+30h] [rbp-38h] BYREF
  char v21; // [rsp+70h] [rbp+8h] BYREF

  v20 = 0LL;
  v1 = (__int64 *)((char *)&gOemBitmapSet + 760 * a1);
  if ( a1 )
    v2 = 24 * (a1 + 3);
  else
    v2 = *(unsigned __int16 *)(gpsi + 6998LL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  EnsureOemBitmapInfoForDpiSlot((struct OEMBITMAPSET *)v1, v2);
  result = GreCreateCompatibleBitmapInternal(
             *(_QWORD *)(gpDispInfo + 56LL),
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
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
    v6 = (__int16 *)&unk_1C03184E2;
    v7 = 93LL;
    v8 = (__int16 *)(v1 + 2);
    do
    {
      if ( v8[2] )
      {
        v9 = *v8;
        v10 = v8[1];
        v11 = (unsigned __int16)*(v6 - 1);
        v12 = *v6;
        v20.right = v9 + v8[2];
        v13 = v10 + v8[3];
        v20.left = v9;
        v20.top = v10;
        v20.bottom = v13;
        if ( v11 == 0xFFFF )
        {
          if ( (v12 & 1) != 0 )
          {
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
            {
              if ( (v12 & 0x100) != 0 )
                v14 = *(HBRUSH *)(gpsi + 4720LL);
              else
                v14 = *(HBRUSH *)(gpsi + 4712LL);
            }
            else if ( (v12 & 0x100) != 0 )
            {
              v14 = *(HBRUSH *)(gpsi + 4920LL);
            }
            else
            {
              v14 = *(HBRUSH *)(gpsi + 4912LL);
            }
            FillRect(v3, &v20, v14);
            v15 = v9 + 2;
            v16 = v10 + 2;
            BitBltSysBmp((__int64)v3, v15, v16, 4u, 0);
            v17 = GetDpiDependentMetric(12, v2) - 2 + v15;
            BitBltSysBmp((__int64)v3, v17, v16, 0xEu, 0);
            v18 = v17 + GetDpiDependentMetric(12, v2);
            BitBltSysBmp((__int64)v3, v18, v16, 0, 0);
            DpiDependentMetric = GetDpiDependentMetric(12, v2);
            BitBltSysBmp((__int64)v3, v18 + DpiDependentMetric, v16, 0xBu, 0);
          }
        }
        else
        {
          DrawFrameControl(v3);
        }
      }
      v8 += 4;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
    return 1LL;
  }
  return result;
}
