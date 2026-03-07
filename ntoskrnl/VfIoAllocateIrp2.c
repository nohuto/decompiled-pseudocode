__int64 __fastcall VfIoAllocateIrp2(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    result = VfPacketCreateAndLock(a1);
    if ( result )
    {
      _InterlockedIncrement((volatile signed __int32 *)(result + 20));
      ++*(_DWORD *)(result + 24);
      *(_DWORD *)(result + 56) |= 0x200000u;
      *(_DWORD *)(a1 + 16) |= 0x40000000u;
      if ( a2 )
      {
        *(_OWORD *)(result + 120) = *a2;
        *(_OWORD *)(result + 136) = a2[1];
        *(_OWORD *)(result + 152) = a2[2];
        *(_OWORD *)(result + 168) = a2[3];
      }
      else
      {
        *(_QWORD *)(result + 120) = 0LL;
      }
      return VfIrpDatabaseEntryReleaseLock(result);
    }
  }
  return result;
}
