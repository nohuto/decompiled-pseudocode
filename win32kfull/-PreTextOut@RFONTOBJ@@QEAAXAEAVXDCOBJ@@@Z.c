void __fastcall RFONTOBJ::PreTextOut(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // rbx
  __int64 i; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8080) == 0x80 && !*(_DWORD *)(*(_QWORD *)this + 92LL) )
  {
    v3 = *(_QWORD *)(SGDGetSessionState(this) + 32);
    v5 = *(_QWORD *)(v3 + 23400);
    GreAcquireSemaphore(v5);
    for ( i = *(_QWORD *)(v3 + 23392); i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 80LL) )
        ++*(_DWORD *)(i + 12);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v5);
  }
}
