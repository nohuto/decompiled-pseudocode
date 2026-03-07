void __fastcall DXGDEVICE::NotifyProcessStatusChange(DXGDEVICE *this)
{
  __int64 v1; // r8
  __int64 v3; // r8
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 209LL) )
  {
    v3 = *(_QWORD *)(v1 + 736);
    v4 = *(_QWORD *)(v3 + 8);
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v4 + 160))(
      *((_QWORD *)this + 100),
      *(unsigned int *)(*((_QWORD *)this + 5) + 432LL),
      v3);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 1032LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 768LL));
  }
}
