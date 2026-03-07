void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x10);
}
