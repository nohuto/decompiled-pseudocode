/*
 * XREFs of IrqLibpParseMadt @ 0x1C00ABC98
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00ABA48 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     ProcessorAddInstance @ 0x1C009A7C4 (ProcessorAddInstance.c)
 *     IcAddGicInstance @ 0x1C009EAFC (IcAddGicInstance.c)
 *     IcAddApicInstance @ 0x1C00AC1C4 (IcAddApicInstance.c)
 */

__int64 __fastcall IrqLibpParseMadt(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  _BYTE *v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // ecx
  __int16 v7; // ax
  bool v8; // cf
  __int64 v9; // rax

  v1 = a1 + 44;
  v2 = a1 + *(unsigned int *)(a1 + 4);
  v3 = (_BYTE *)(a1 + 46);
  if ( a1 + 46 <= v2 )
  {
    do
    {
      v4 = *(unsigned __int8 *)(v1 + 1);
      if ( (unsigned __int8)v4 < 2u || v1 + v4 > v2 )
        return 0LL;
      if ( *(_BYTE *)v1 )
      {
        switch ( *(_BYTE *)v1 )
        {
          case 1:
            if ( (_BYTE)v4 == 12 )
            {
              result = IcAddApicInstance(*(unsigned int *)(v1 + 8));
              goto LABEL_35;
            }
            break;
          case 2:
            if ( (_BYTE)v4 == 10 && !*v3 && *(_BYTE *)(v1 + 3) < 0x10u )
            {
              *((_DWORD *)&IsaVectorOverrides + 2 * *(unsigned __int8 *)(v1 + 3)) = *(_DWORD *)(v1 + 4);
              v7 = *(_WORD *)(v1 + 8);
              if ( (v7 & 0xF) != 0 )
              {
                v8 = (v7 & 3u) < 2;
                v9 = *(unsigned __int8 *)(v1 + 3);
                if ( v8 )
                  *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4) = 0;
                else
                  *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4) = 2;
                if ( (*(_BYTE *)(v1 + 8) & 8) != 0 )
                  *((_BYTE *)&IsaVectorOverrides + 8 * *(unsigned __int8 *)(v1 + 3) + 4) |= 1u;
              }
            }
            break;
          case 9:
            if ( (_BYTE)v4 == 16 && (*(_BYTE *)(v1 + 8) & 1) != 0 )
            {
LABEL_19:
              v6 = *(_DWORD *)(v1 + 4);
              goto LABEL_34;
            }
            break;
          case 0xB:
            if ( (unsigned __int8)v4 >= 0x28u && (*(_BYTE *)(v1 + 12) & 1) != 0 )
            {
              if ( (unsigned int)IrqLibGicVersion < 3 )
                goto LABEL_19;
              if ( (unsigned __int8)v4 >= 0x4Cu )
              {
                v6 = (*(_QWORD *)(v1 + 68) >> 8) ^ (*(_DWORD *)(v1 + 68) ^ (*(_DWORD *)(v1 + 68) >> 8)) & 0xFFFFFF;
                goto LABEL_34;
              }
            }
            break;
          default:
            if ( *(_BYTE *)v1 == 12 && (unsigned __int8)v4 >= 0x18u )
            {
              result = IcAddGicInstance(*(_DWORD *)(v1 + 16));
              goto LABEL_35;
            }
            break;
        }
      }
      else if ( (_BYTE)v4 == 8 && (*(_BYTE *)(v1 + 4) & 1) != 0 )
      {
        v6 = *(unsigned __int8 *)(v1 + 3);
LABEL_34:
        result = ProcessorAddInstance(v6, -1);
LABEL_35:
        if ( (int)result < 0 )
          return result;
      }
      v1 += *(unsigned __int8 *)(v1 + 1);
      v3 = (_BYTE *)(v1 + 2);
    }
    while ( v1 + 2 <= v2 );
  }
  return 0LL;
}
