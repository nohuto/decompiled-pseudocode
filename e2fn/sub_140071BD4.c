__int64 __fastcall sub_140071BD4(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 240;
  v5 = a2;
  if ( *(_QWORD *)(v2 + 32) )
    v3 = v2;
  else
    v3 = *(_QWORD *)(v2 + 8);
  return sub_1400AF968(v2, v3, &v5);
}
