__int64 __fastcall DMMVIDPNPRESENTPATH::UnpinContentScaling(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( *((_DWORD *)this + 28) == 254 )
  {
    v5 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v5 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    return 1075708753LL;
  }
  else
  {
    *((_DWORD *)this + 28) = 254;
    return 0LL;
  }
}
