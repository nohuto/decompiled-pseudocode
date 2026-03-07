__int64 __fastcall IopParentToRawTranslation(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = 0LL;
  if ( !*(_DWORD *)(a1 + 56) || *(_BYTE *)(a1 + 136) == 8 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 24LL)
                                                                                                + 32LL))(
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 24LL) + 8LL),
               *(_QWORD *)(a1 + 112),
               1LL,
               *(unsigned int *)(v2 + 56),
               *(_QWORD *)(v2 + 64),
               *(_QWORD *)(v2 + 72),
               *(_QWORD *)(v2 + 112));
    if ( (int)result >= 0 )
      return IopParentToRawTranslation(v2);
  }
  return result;
}
