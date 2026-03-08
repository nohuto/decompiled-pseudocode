/*
 * XREFs of WheapQueryPshedForErrorSources @ 0x140B3E5DC
 * Callers:
 *     WheaInitialize @ 0x140B3E1A0 (WheaInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapQueryPshedForErrorSources(_DWORD *a1, _QWORD *a2)
{
  int AllErrorSources; // eax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG Size; // [rsp+50h] [rbp+20h] BYREF
  int v8; // [rsp+58h] [rbp+28h] BYREF

  v6[0] = 0LL;
  Size = 0;
  v8 = 0;
  if ( (unsigned int)PshedGetAllErrorSources(&v8, v6, &Size) == -1073741789 )
  {
    v6[0] = PshedAllocateMemory(Size);
    if ( !v6[0] )
    {
      LODWORD(WheapStatus) = WheapStatus + 1;
      result = 3221225626LL;
      HIDWORD(WheapStatus) |= 1u;
      return result;
    }
    AllErrorSources = PshedGetAllErrorSources(&v8, v6, &Size);
    if ( AllErrorSources >= 0 )
    {
      *a2 = v6[0];
      *a1 = v8;
      return 0LL;
    }
    LODWORD(WheapStatus) = WheapStatus + 1;
    HIDWORD(WheapStatus) |= 0x20u;
    dword_140C2C798 = AllErrorSources;
  }
  else
  {
    LODWORD(WheapStatus) = WheapStatus + 1;
    HIDWORD(WheapStatus) |= 4u;
  }
  return 3221225473LL;
}
