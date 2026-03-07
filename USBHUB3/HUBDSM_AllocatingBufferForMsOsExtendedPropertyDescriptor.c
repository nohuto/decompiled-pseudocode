__int64 __fastcall HUBDSM_AllocatingBufferForMsOsExtendedPropertyDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 Pool2; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  Pool2 = ExAllocatePool2(64LL, *(unsigned int *)(v1 + 1732), 1681082453LL);
  *(_QWORD *)(v1 + 2112) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x3Cu,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
    v2 = -1073741823;
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
