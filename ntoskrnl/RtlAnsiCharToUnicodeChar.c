/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1406EA670
 * Callers:
 *     _safecrt_mbtowc @ 0x1403D4730 (_safecrt_mbtowc.c)
 *     toupper @ 0x1403D5BB0 (toupper.c)
 *     _mbstrlen @ 0x1403D7BF4 (_mbstrlen.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x14075A870 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(const CHAR **a1)
{
  int v2; // ebp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  const CHAR *v4; // rbx
  ULONG UTF8StringByteCount; // esi
  struct _LIST_ENTRY *v6; // rax
  WCHAR *p_UnicodeStringDestination; // r8
  ULONG v8; // r10d
  const CHAR *v9; // r9
  __int128 *p_Blink; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  WCHAR *v13; // rdx
  __int64 v14; // rax
  CHAR v16; // al
  __int64 v17; // r11
  __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  WCHAR UnicodeStringDestination; // [rsp+50h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  v2 = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    v4 = *a1;
    v16 = **a1;
    if ( (unsigned __int8)v16 < 0xC0u )
      goto LABEL_3;
    if ( (unsigned __int8)v16 >= 0xE0u )
    {
      if ( (unsigned __int8)v16 >= 0xF0u )
      {
        UTF8StringByteCount = 1;
        if ( (unsigned __int8)v16 < 0xF8u )
          UTF8StringByteCount = 4;
      }
      else
      {
        UTF8StringByteCount = 3;
      }
    }
    else
    {
      UTF8StringByteCount = 2;
    }
  }
  else
  {
    _InterlockedOr(v19, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v4 = *a1;
    if ( !*((_WORD *)&CurrentServerSiloGlobals[75].Blink->Flink + *(unsigned __int8 *)*a1) )
    {
LABEL_3:
      UTF8StringByteCount = 1;
      goto LABEL_4;
    }
    UTF8StringByteCount = 2;
  }
LABEL_4:
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
    v8 = UTF8StringByteCount;
    p_UnicodeStringDestination = &UnicodeStringDestination;
    v9 = v4;
  }
  else
  {
    _InterlockedOr(v19, 0);
    v6 = PsGetCurrentServerSiloGlobals();
    p_UnicodeStringDestination = &UnicodeStringDestination;
    v8 = UTF8StringByteCount;
    v9 = v4;
    p_Blink = (__int128 *)&v6[66].Blink;
    if ( v6 == (struct _LIST_ENTRY *)-1064LL )
    {
LABEL_15:
      RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v4, UTF8StringByteCount);
      goto LABEL_11;
    }
  }
  if ( *(_WORD *)p_Blink == 0xFDE9 )
    goto LABEL_15;
  if ( *((_WORD *)p_Blink + 6) )
  {
    v17 = *((_QWORD *)p_Blink + 7);
    while ( v8 )
    {
      --v2;
      --v8;
      v18 = 2LL * *(unsigned __int8 *)v9;
      if ( *(_WORD *)(v18 + v17) )
      {
        if ( !v8 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        ++v9;
        --v8;
        *p_UnicodeStringDestination = *(_WORD *)(v17
                                               + 2
                                               * (*(unsigned __int8 *)v9
                                                + (unsigned __int64)*(unsigned __int16 *)(v18 + v17)));
      }
      else
      {
        *p_UnicodeStringDestination = *(_WORD *)(v18 + *((_QWORD *)p_Blink + 4));
      }
      ++p_UnicodeStringDestination;
      ++v9;
      if ( !v2 )
        break;
    }
  }
  else
  {
    v11 = *((_QWORD *)p_Blink + 4);
    v12 = UTF8StringByteCount;
    v13 = &UnicodeStringDestination;
    if ( UTF8StringByteCount > 1 )
      v12 = 1LL;
    do
    {
      v14 = *(unsigned __int8 *)v4;
      ++v13;
      ++v4;
      *(v13 - 1) = *(_WORD *)(v11 + 2 * v14);
      --v12;
    }
    while ( v12 );
  }
LABEL_11:
  *a1 += UTF8StringByteCount;
  return UnicodeStringDestination;
}
