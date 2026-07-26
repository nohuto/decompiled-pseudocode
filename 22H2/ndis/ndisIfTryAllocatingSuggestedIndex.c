/*
 * XREFs of ndisIfTryAllocatingSuggestedIndex @ 0x1C002BEF8
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C002B8BC (ndisIfRegisterInterfaceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C00170C0 (WPP_RECORDER_SF_Dd.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0039CE8 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 */

char __fastcall ndisIfTryAllocatingSuggestedIndex(unsigned int a1)
{
  char *v1; // rbx
  char v2; // di
  int v3; // eax
  ULONG64 v5; // rsi
  char v6[4]; // [rsp+30h] [rbp-18h]

  v1 = (char *)&dword_1C00E5418;
  v2 = a1;
  if ( a1 < *(_DWORD *)dword_1C00E5A04 )
    v1 = (char *)&dword_1C00E5400;
  if ( a1 >= *(_DWORD *)v1 )
  {
    v5 = a1 - *(_DWORD *)v1;
    v3 = IfIndexRange::Grow((IfIndexRange *)v1, (int)v5 + 1);
    if ( !v3 )
    {
      if ( !RtlTestBitEx((PRTL_BITMAP_EX)(v1 + 8), (unsigned int)v5) )
      {
        RtlSetBitEx((PRTL_BITMAP_EX)(v1 + 8), v5);
        return 1;
      }
      v3 = -1073741791;
    }
  }
  else
  {
    v3 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v3;
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_9dce56da390c33c6d21cbd31c5ab688d_Traceguids,
      v2,
      *(_DWORD *)v6);
  }
  return 0;
}
