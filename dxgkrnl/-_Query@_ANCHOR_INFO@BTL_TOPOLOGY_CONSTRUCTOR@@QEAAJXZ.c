__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query(BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-40h]
  __int128 v5; // [rsp+30h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v4 + 1) = -1LL;
  HIDWORD(v5) = -1;
  *(_QWORD *)&v6 = 0x100000000LL;
  WORD4(v6) = 0;
  *(_QWORD *)&v4 = 0LL;
  LODWORD(v5) = -2;
  *(_QWORD *)((char *)&v5 + 4) = 4294967294LL;
  *(_OWORD *)this = v4;
  BYTE10(v6) = 0;
  *((_OWORD *)this + 1) = v5;
  HIDWORD(v6) = 4;
  LOWORD(v7) = 256;
  *((_OWORD *)this + 2) = v6;
  *((_DWORD *)this + 12) = v7;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_,
             (__int64)this,
             4);
  if ( (_DWORD)result == -2147483622 )
  {
    result = 0LL;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( *((_DWORD *)this + 3) == -1 )
    return 3221225473LL;
  return result;
}
