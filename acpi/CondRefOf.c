__int64 __fastcall CondRefOf(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  bool v5; // al
  __int64 v6; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v8);
  if ( !v4 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 128) <= 1u )
    {
      v5 = IsCompatableDSDTRevision();
      v6 = v8;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v5 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      return (unsigned int)WriteObject(a1, v6, *(_QWORD *)(a2 + 80));
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    }
  }
  return v4;
}
