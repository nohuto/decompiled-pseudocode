__int64 __fastcall HUBMISC_ReAttachDevice(__int64 a1)
{
  __int64 result; // rax

  result = HUBSM_AddEvent(*(_QWORD *)(a1 + 1328) + 504LL, 4050);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 1u);
  *(_DWORD *)(a1 + 1424) = 9;
  return result;
}
