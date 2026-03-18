/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00B1B20
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C003D9F0 (xxxKeyEventEx.c)
 *     ApiSetEditionIsSAS @ 0x1C0208F94 (ApiSetEditionIsSAS.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  struct tagKE *v1; // rbx
  unsigned __int16 *v2; // rdi
  __int16 v3; // ax
  signed __int16 v5; // cx
  void *v6; // r8
  int v7; // eax
  __int16 *v8; // rcx
  __int64 v9; // rdx
  void *v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  if ( byte_1C029ACA4 )
  {
    if ( byte_1C029ACA4 == *((_BYTE *)a1 + 2) )
    {
      v5 = *((_WORD *)a1 + 1);
      if ( v5 < 0 )
      {
        xxxKeyEventEx(
          v5,
          *(unsigned __int8 *)v1,
          *((_DWORD *)v1 + 1),
          0LL,
          *((void **)v1 + 1),
          (unsigned __int16 *)v1 + 8,
          0,
          0,
          0LL,
          0LL);
        *((_WORD *)v1 + 1) = word_1C02A0638;
        *(_BYTE *)v1 = byte_1C02A063A;
        byte_1C029ACA4 = 0;
      }
      return 1LL;
    }
    v2 = (unsigned __int16 *)((char *)a1 + 16);
    xxxKeyEventEx(
      word_1C02A0638,
      (unsigned __int8)byte_1C02A063A | 0x200,
      *((_DWORD *)a1 + 1),
      0LL,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    byte_1C029ACA4 = 0;
  }
  else
  {
    v2 = (unsigned __int16 *)((char *)a1 + 16);
  }
  v3 = *((_WORD *)v1 + 1);
  if ( (v3 & 0x800) != 0 )
  {
    v11 = 0;
    LOBYTE(a1) = v3;
    if ( !(unsigned int)ApiSetEditionIsSAS(a1, &v11)
      && ((byte_1C0295784 & 2) != 0 || gptiForeground && (*((_DWORD *)gptiForeground + 314) & 0x800000) != 0) )
    {
      if ( (byte_1C0295764 & 1) != 0 )
      {
        v6 = (void *)*((_QWORD *)v1 + 1);
        byte_1C029ACA4 = *((_BYTE *)v1 + 2);
        v10 = v6;
        LODWORD(v6) = *((_DWORD *)v1 + 1);
        byte_1C02A063A = (byte_1C0295788 & 4) != 0 ? 54 : 42;
        word_1C02A0638 = (byte_1C0295788 & 4) != 0 ? 417 : 160;
        xxxKeyEventEx(
          word_1C02A0638 | 0x8000,
          (unsigned __int8)byte_1C02A063A | 0x200,
          (unsigned int)v6,
          0LL,
          v10,
          v2,
          0,
          0,
          0LL,
          0LL);
      }
      else if ( !_bittest16((const signed __int16 *)v1 + 1, 0xDu) )
      {
        v7 = 0;
        if ( ausNumPadCvt[0] )
        {
          v8 = ausNumPadCvt;
          v9 = 0LL;
          while ( *(_BYTE *)v8 != *((_BYTE *)v1 + 2) )
          {
            ++v9;
            ++v7;
            v8 = &ausNumPadCvt[v9];
            if ( !*v8 )
              return 1LL;
          }
          *((_BYTE *)v1 + 2) = 0;
          *((_WORD *)v1 + 1) |= HIBYTE(ausNumPadCvt[v7]);
        }
      }
    }
  }
  return 1LL;
}
