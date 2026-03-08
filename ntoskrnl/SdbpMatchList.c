/*
 * XREFs of SdbpMatchList @ 0x1407A2310
 * Callers:
 *     SdbpCheckForMatch @ 0x1407A1468 (SdbpCheckForMatch.c)
 *     SdbpMatchOne @ 0x140A4EA60 (SdbpMatchOne.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbpFindMatcher @ 0x1407A2454 (SdbpFindMatcher.c)
 *     SdbGetFirstChild @ 0x1407A2738 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1407A280C (SdbGetNextChild.c)
 *     SdbpIsSdbCapabilityPresent @ 0x140A4E8A0 (SdbpIsSdbCapabilityPresent.c)
 */

__int64 __fastcall SdbpMatchList(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        BOOL a8)
{
  int v10; // esi
  unsigned int i; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall *Matcher)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rax
  unsigned int v16; // ecx
  unsigned int FirstTag; // eax
  __int64 v18; // r8
  int v19; // eax
  int v21; // eax
  __int64 StringTagPtr; // rax
  int v23; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF

  a8 = 1;
  v24 = 0;
  v25 = 0LL;
  v23 = 0;
  v10 = 0;
  for ( i = SdbGetFirstChild(a4, a5); ; i = SdbGetNextChild(a4, a5, v14) )
  {
    v14 = i;
    if ( !i )
      break;
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher((unsigned int)&v25, (unsigned int)&v23, a3, a4, i);
    if ( Matcher )
    {
      v16 = Matcher(&a8, a3, a4, a5, v14, a6, v25);
      if ( !v16 )
        return v16;
    }
    else
    {
      if ( v23 == 2 )
      {
        v21 = 1;
      }
      else
      {
        if ( v23 != 3 )
          continue;
        v21 = 0;
      }
      a8 = v21;
    }
    ++v10;
    if ( (unsigned int)SdbFindFirstTag(a4, v14, 4099LL) )
      a8 = !a8;
    FirstTag = SdbFindFirstTag(a4, v14, 24636LL);
    if ( FirstTag
      && (StringTagPtr = SdbGetStringTagPtr(a4, FirstTag, v18), SdbpIsSdbCapabilityPresent(&v24, a3, StringTagPtr), v24) )
    {
      v19 = !a8;
      a8 = v19;
    }
    else
    {
      v19 = a8;
    }
    if ( v19 == a7 )
      goto LABEL_13;
  }
  v19 = a8;
LABEL_13:
  v16 = 1;
  *a1 = v19;
  if ( a2 )
    *a2 = v10;
  return v16;
}
