void __fastcall CHidInput::ProcessPTPMouseInput(
        CHidInput *this,
        void *a2,
        struct _MOUSE_INPUT_DATA *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // xmm1_8

  *((_QWORD *)this + 179) = a2;
  *((_OWORD *)this + 90) = *(_OWORD *)&a3->UnitId;
  v6 = *(_QWORD *)&a3->LastY;
  *((_QWORD *)this + 184) = a5;
  *((_DWORD *)this + 370) = a6;
  *((_QWORD *)this + 182) = v6;
  *((_QWORD *)this + 183) = a4;
  CRIMBase::SensorDoWorkAndWait((__int64)this, 0xDu);
}
