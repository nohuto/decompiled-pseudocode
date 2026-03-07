__int64 __fastcall DMMVIDPNTARGETMODESET::UnpinMode(DMMVIDPNTARGETMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h]

  if ( *((_BYTE *)this + 136) )
  {
    v5 = *((_QWORD *)this + 18);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 92);
      if ( ((*(_DWORD *)(v5 + 120) >> 3) & 0x3F) != 0 )
      {
        LODWORD(v8) = *(_QWORD *)(v5 + 92);
        HIDWORD(v8) = ((*(_DWORD *)(v5 + 120) >> 3) & 0x3F) * HIDWORD(v6);
        v6 = v8;
      }
      *(_QWORD *)(v5 + 152) = v6;
      *(_DWORD *)(v5 + 160) = 1;
      *((_QWORD *)this + 18) = 0LL;
      return 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(0LL, this, a3, a4);
      return 1075708679LL;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    return 3223192352LL;
  }
}
