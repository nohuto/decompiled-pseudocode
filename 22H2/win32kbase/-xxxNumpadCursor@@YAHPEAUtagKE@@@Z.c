/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C009FEE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C004CFD0 (xxxKeyEventEx.c)
 *     ApiSetEditionIsSAS @ 0x1C00C0B44 (ApiSetEditionIsSAS.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  unsigned __int16 *v2; // rdi
  __int16 v3; // ax
  __int64 v4; // rcx
  signed __int16 v6; // cx
  void *v7; // r8
  int v8; // eax
  __int16 *v9; // rcx
  __int64 v10; // rdx
  void *v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+68h] [rbp+10h] BYREF

  if ( byte_1C0254F14 )
  {
    if ( byte_1C0254F14 == *((_BYTE *)a1 + 2) )
    {
      v6 = *((_WORD *)a1 + 1);
      if ( v6 < 0 )
      {
        xxxKeyEventEx(
          v6,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0LL,
          *((void **)a1 + 1),
          (unsigned __int16 *)a1 + 8,
          0,
          0,
          0LL,
          0LL);
        *((_WORD *)a1 + 1) = word_1C02586B0;
        *(_BYTE *)a1 = byte_1C02586B2;
        byte_1C0254F14 = 0;
      }
      return 1LL;
    }
    v2 = (unsigned __int16 *)((char *)a1 + 16);
    xxxKeyEventEx(
      word_1C02586B0,
      (unsigned __int8)byte_1C02586B2 | 0x200,
      *((_DWORD *)a1 + 1),
      0LL,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    byte_1C0254F14 = 0;
  }
  else
  {
    v2 = (unsigned __int16 *)((char *)a1 + 16);
  }
  v3 = *((_WORD *)a1 + 1);
  v4 = 2048LL;
  if ( (v3 & 0x800) != 0 )
  {
    v12 = 0;
    LOBYTE(v4) = v3;
    if ( !(unsigned int)ApiSetEditionIsSAS(v4, &v12)
      && ((byte_1C024F604 & 2) != 0 || gptiForeground && (*((_DWORD *)gptiForeground + 308) & 0x800000) != 0) )
    {
      if ( (byte_1C024F5E4 & 1) != 0 )
      {
        v7 = (void *)*((_QWORD *)a1 + 1);
        byte_1C0254F14 = *((_BYTE *)a1 + 2);
        v11 = v7;
        LODWORD(v7) = *((_DWORD *)a1 + 1);
        byte_1C02586B2 = (byte_1C024F608 & 4) != 0 ? 54 : 42;
        word_1C02586B0 = (byte_1C024F608 & 4) != 0 ? 417 : 160;
        xxxKeyEventEx(
          word_1C02586B0 | 0x8000,
          (unsigned __int8)byte_1C02586B2 | 0x200,
          (unsigned int)v7,
          0LL,
          v11,
          v2,
          0,
          0,
          0LL,
          0LL);
      }
      else if ( (*((_WORD *)a1 + 1) & 0x2000) == 0 )
      {
        v8 = 0;
        if ( ausNumPadCvt[0] )
        {
          v9 = ausNumPadCvt;
          v10 = 0LL;
          while ( *(_BYTE *)v9 != *((_BYTE *)a1 + 2) )
          {
            ++v10;
            ++v8;
            v9 = &ausNumPadCvt[v10];
            if ( !*v9 )
              return 1LL;
          }
          *((_BYTE *)a1 + 2) = 0;
          *((_WORD *)a1 + 1) |= HIBYTE(ausNumPadCvt[v8]);
        }
      }
    }
  }
  return 1LL;
}
