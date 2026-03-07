__int64 __fastcall HUBMISC_StopPortTimer(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1312), 0LL) != 1 )
    return 3009LL;
  result = 3013LL;
  *(_BYTE *)(a1 + 1458) = 0;
  return result;
}
