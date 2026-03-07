void __fastcall CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v3; // r9
  int v4; // ecx
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v1 = *((_QWORD *)this + 527);
  v3 = *(_QWORD *)(v1 + 64);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v1 + 240);
    v6 = *((_QWORD *)this + 526);
    v7 = *(_QWORD *)(v6 + 72);
    v8 = (v7 + (v5 >> 4) - v3) / v5;
    if ( v8 <= 3 )
      v7 = v3 + v5 * v8;
    *(_QWORD *)(v6 + 64) = v7;
    v4 = v8 + *(_DWORD *)(*((_QWORD *)this + 527) + 44LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 526) + 64LL) = *(_QWORD *)(*((_QWORD *)this + 526) + 72LL);
    v4 = *(_DWORD *)(*((_QWORD *)this + 527) + 44LL) + 1;
  }
  *(_DWORD *)(*((_QWORD *)this + 526) + 44LL) = v4;
}
