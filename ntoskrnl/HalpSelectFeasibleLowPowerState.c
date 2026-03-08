/*
 * XREFs of HalpSelectFeasibleLowPowerState @ 0x140B8F7F8
 * Callers:
 *     HalpChannelInitializeStaticConfiguration @ 0x140B63680 (HalpChannelInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpSelectFeasibleLowPowerState(__int64 a1, char *a2, unsigned __int16 a3, __int64 a4)
{
  char v4; // bl
  unsigned int v8; // r10d
  unsigned int v9; // edi
  unsigned __int8 v10; // r8
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  char v14; // cl
  char v15; // al
  char v16; // cl

  v4 = 0;
  v8 = 1;
  if ( (*(_BYTE *)a1 & 3) != 3 )
    goto LABEL_17;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 <= 1 )
    goto LABEL_17;
  *a2 = 0;
  v10 = 0;
  v11 = (char *)(a1 + 32);
  while ( 1 )
  {
    v12 = (unsigned __int8)v11[1];
    if ( (unsigned __int16)v12 >= a3 )
      break;
    v13 = 28 * v12;
    v14 = *(_BYTE *)(28 * v12 + a4);
    if ( (v14 & 0x3F) == 1
      && (v14 & 0xC0) == 0x40
      && (*(_BYTE *)(v13 + a4 + 1) & 5) == 1
      && *(_QWORD *)(v13 + a4 + 12) <= 0x3B9ACA00uLL )
    {
      v15 = *a2;
      v16 = *v11;
      if ( (unsigned __int8)*a2 <= (unsigned __int8)*v11 )
        v15 = *v11;
      *a2 = v15;
      if ( !v16 )
        v4 = 1;
    }
    ++v10;
    v11 += 2;
    if ( v10 >= v9 )
      goto LABEL_16;
  }
  v8 = 0;
LABEL_16:
  if ( !v4 )
LABEL_17:
    *a2 = 0;
  return v8;
}
