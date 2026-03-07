__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  *(_QWORD *)&v6 = 0LL;
  DWORD2(v6) = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = *a2;
    v6 = a2[1];
    a2 = &v5;
  }
  return AlpcpCaptureViewAttributeInternal(a1, a2, a3, a4);
}
