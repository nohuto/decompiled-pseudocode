__int64 __fastcall XilCoreCommand_AllocateResources(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v3 = *(_QWORD *)(v2 + 88);
  v4 = CommonBuffer_AcquireBuffer(*(struct _KEVENT **)(v2 + 120), 512, a1, 828665155);
  *(_QWORD *)(a1 + 16) = v4;
  result = 0LL;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 32) = 31;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 24) + 496LL;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 + 32) + 24LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)a1 + 16LL),
        v4,
        7,
        10,
        (__int64)&WPP_0ca11c42166c3ea98264a17e501f5a94_Traceguids);
    }
    return 3221225626LL;
  }
  return result;
}
