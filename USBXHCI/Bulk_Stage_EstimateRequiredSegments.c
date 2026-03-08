/*
 * XREFs of Bulk_Stage_EstimateRequiredSegments @ 0x1C0012734
 * Callers:
 *     Bulk_PrepareStage @ 0x1C001239C (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0041E20 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x1C0047574 (WPP_RECORDER_SF_DDDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredSegments(_DWORD *a1, int *a2)
{
  __int64 v4; // rbx
  int v5; // r9d
  unsigned int v6; // edi
  unsigned int v7; // ecx
  int v8; // edi
  __int64 result; // rax
  unsigned int v10; // r10d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r8d

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 336LL) & 8) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v5 = *(_DWORD *)(v4 + 192);
    v6 = *(_DWORD *)(v4 + 196) - v5 - (unsigned int)(*(_DWORD *)(v4 + 196) - v5) % a1[20];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(v4 + 196),
        v5);
    v7 = a1[21];
    if ( v7 > v6 )
    {
      v10 = *(_DWORD *)(v4 + 196) - *(_DWORD *)(v4 + 196) % a1[20];
      v11 = (v7 - v6 + v10 - 1) / v10;
      v8 = v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = *(_QWORD *)(v4 + 48);
        v13 = *(unsigned __int8 *)(v12 + 135);
        LOBYTE(v12) = 5;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          v12,
          v13,
          33,
          (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
          v13,
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          *(_DWORD *)(v4 + 64),
          v10,
          v11);
      }
    }
    else
    {
      v8 = 0;
    }
  }
  result = *(_QWORD *)(v4 + 40);
  *a2 = v8;
  if ( _bittest64((const signed __int64 *)(result + 336), 0x31u) )
  {
    result = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(result + 20) == 3 )
    {
      result = *(_QWORD *)(v4 + 56);
      if ( *(_DWORD *)(result + 120) == 6 )
      {
        result = (unsigned int)(v8 + 1);
        *a2 = result;
      }
    }
  }
  return result;
}
