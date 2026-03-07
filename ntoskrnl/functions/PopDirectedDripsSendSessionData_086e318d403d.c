__int64 __fastcall PopDirectedDripsSendSessionData(__int64 a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = HIDWORD(a1);
  v4 = 0;
  v5 = 0;
  v2 = 0;
  PopDirectedDripsQueryMitigationStatus(&v5, &v4, (int *)&v2);
  return PopDirectedDripsDiagNotifySessionStop(v5, v4, v2);
}
